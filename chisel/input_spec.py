from dataclasses import dataclass

@dataclass(frozen=True, slots=True)
class InputSpec:
    """
    Input specification for a C function.

    Attributes:
        args: The valuation of the function arguments.
        array_size_map: A mapping from array-like names to their sizes.
    """
    args: tuple[str, ...]
    array_size_map: dict[str, str]

    @classmethod
    def from_vals(cls, *args, **kwargs):
        return cls(args, kwargs)