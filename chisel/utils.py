"""Handy functions (potentially) used across multiple files."""
import os
import string
from typing import *
from dataclasses import dataclass
from itertools import repeat, combinations, chain, combinations

import dill


class SynthesisTimeoutException(BaseException):
    def __init__(self, message: str = "Synthesis timed out"):
        self.message = message
        super().__init__(self.message)


@dataclass
class StringFormatCache:
    template_str: str
    format_args: dict[str, str]

    class _FormatDict(dict):
        def __missing__(self, key):
            return f"{{missing: {key}}}"

    def __str__(self) -> str:
        formatter = string.Formatter()
        mapping = StringFormatCache._FormatDict(self.format_args)
        return formatter.vformat(self.template_str, (), mapping)


def cached_format(
    fmt: str | StringFormatCache, **fmt_args: dict[str, str]
) -> StringFormatCache:
    """Formats a string using the format_args dictionary.
    Arguments:
    fmt (str | StringFormatCache) -- string to be formatted, or a StringFormatCache object
    fmt_args (dict[str, str]) -- dictionary of format arguments
    Returns:
    StringFormatCache -- Format result
    """
    if isinstance(fmt, StringFormatCache):
        fmt.format_args.update(fmt_args)
        return fmt
    elif isinstance(fmt, str):
        return StringFormatCache(fmt, fmt_args)

    raise TypeError(f"format must be a StringFormatCache or str, not {type(otherwise)}")

    # match fmt:
    #     case StringFormatCache():
    #         fmt.format_args.update(fmt_args)
    #         return fmt
    #     case str():
    #         return StringFormatCache(fmt, fmt_args)
    #     case otherwise:
    #         raise TypeError(
    #             f"format must be a StringFormatCache or str, not {type(otherwise)}")


def save_to_bin(obj: Any, out_path: str):
    """Saves obj to a binary file at out_path
    Arguments:
    obj (Any) -- object to be saved
    out_path (str) -- path to output file
    """
    if os.path.exists(out_path):
        # Delete existing binary file if it exists
        os.remove(out_path)

    dill.dump(obj, open(out_path, "wb"))


def load_from_bin(src_path: str) -> Any:
    """Loads obj from a binary file at out_path
    Arguments:
    src_path (str) -- path to source file
    Returns:
    obj (Any) -- object loaded from bin
    """
    if not os.path.exists(src_path):
        raise Exception(
            "Cannot load binary from {} -- path does not exist!".format(src_path)
        )

    return dill.load(open(src_path, "rb"))


def has_at_least(it: Iterable, n: int) -> bool:
    """Returns True if the iterator has at least n elements, False otherwise.
    Arguments:
    it (iter) -- iterator
    n (int) -- number of elements to check for
    Returns:
    bool -- True if the iterator has at least n elements, False otherwise
    """
    return all(map(any, repeat(iter(it), n)))


def all_ordered_combinations(xs: list[Any]) -> Iterable[tuple[Any]]:
    """Returns all combinations of the elements in the list xs.
    Arguments:
    xs (list[Any]) -- list of elements
    Returns:
    list[tuple[Any]] -- all combinations of the elements in the list xs
    """
    for i in range(1, min(3, len(xs) + 1)):
        yield from combinations(xs, i)


class NoOverwriteDict(dict):
    """Dictionary that does not allow overwriting of existing keys."""

    def __setitem__(self, key, value):
        if key in self:
            raise KeyError(f"Key {key} already exists in dictionary!")
        super().__setitem__(key, value)


def powerset(iterable):
    "powerset([1,2,3]) --> () (1,) (2,) (3,) (1,2) (1,3) (2,3) (1,2,3)"
    s = list(iterable)
    return chain.from_iterable(combinations(s, r) for r in range(len(s) + 1))

def statement_is_return(src: str) -> bool:
    return src.strip().startswith("return")

def statement_is_break(src: str) -> bool:
    return src.strip() == "break;"

def statement_contains_control_flow(src: str) -> bool:
    return any(
        [
            statement_is_return(src),
            statement_is_break(src),
            "continue;" == src.strip(),
        ]
    )

def sequence_intersection(seqs: list[list]) -> list:
    """Returns the intersection of the sequences in seqs. Preserve order.
    Arguments:
    seqs (Sequence[Sequence]) -- list of sequences
    Returns:
    Sequence -- intersection of the sequences in seqs
    """
    if not seqs:
        return []

    # Convert the sequences to sets and find the intersection
    intersection_set = set(seqs[0]).intersection(*seqs[1:])

    # Preserve the order of the elements in the first sequence
    result = [item for item in seqs[0] if item in intersection_set]
    return result

