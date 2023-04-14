from pathlib import Path
import json

from input_spec import InputSpec

INPUT_SPECS = {
    "legacy": [
        InputSpec.from_vals(-2),
        InputSpec.from_vals(-1),
        InputSpec.from_vals(0),
        InputSpec.from_vals(1),
        InputSpec.from_vals(2),
        InputSpec.from_vals(3),
        InputSpec.from_vals(4),
        InputSpec.from_vals(5),
        InputSpec.from_vals(6),
    ],
    "1ints": [
        # InputSpec.from_vals(-2),
        # InputSpec.from_vals(-1),
        InputSpec.from_vals(0),
        InputSpec.from_vals(16),
        InputSpec.from_vals(22),
        InputSpec.from_vals(3),
        InputSpec.from_vals(4),
        InputSpec.from_vals(17)
        # InputSpec.from_vals(52),
    ],
    "2ints": [
        # InputSpec.from_vals(-2, -5),
        # InputSpec.from_vals(-1, 9),
        # InputSpec.from_vals(0, 2),
        InputSpec.from_vals(2, 7),
        InputSpec.from_vals(2, 4),
        InputSpec.from_vals(3, 6),
        InputSpec.from_vals(34, 24),
        InputSpec.from_vals(5, 10),
        InputSpec.from_vals(5, 5),
        InputSpec.from_vals(5, 4),
    ],
    "binarymult": [
        InputSpec.from_vals(10, 11100),
        InputSpec.from_vals(1110, 10110),
    ],
    "alldigits": [
        InputSpec.from_vals(12345, word=5, roman_Number=20),
        InputSpec.from_vals(67890, word=5, roman_Number=20),
        InputSpec.from_vals(12, word=2, roman_Number=20),
    ],
    "str_only": [
        InputSpec.from_vals('"Jo1hn Smith"', str=10),
        InputSpec.from_vals('"John S"', str=7),
        InputSpec.from_vals('"Smith John Init"', str=15),
    ],
    "str_len": [
        InputSpec.from_vals('"Jo1hn Smit"', 9, str=9, wfile=10, rfile=10),
        InputSpec.from_vals('"John S"', 7, str=7, wfile=10, rfile=10),
        InputSpec.from_vals('"Test5"', 5, str=5, wfile=10, rfile=10),
    ],
    "chars": [
        InputSpec.from_vals('"abxc"', '"aswd"', a=4, b=4),
        InputSpec.from_vals('"a"', '"a"', a=1, b=1),
    ],
    "anagram": [
        InputSpec.from_vals('"vile"', '"evil"', a=4, b=4),
        InputSpec.from_vals('"abxc"', '"aswd"', a=4, b=4),
        InputSpec.from_vals('"ab"', '"as"', a=2, b=2),
    ],
    "armstrong": [
        InputSpec.from_vals(153),
        InputSpec.from_vals(371),
        InputSpec.from_vals(407),
        InputSpec.from_vals(1),
        InputSpec.from_vals(2),
        InputSpec.from_vals(3),
    ],
    "binaryadd": [
        InputSpec.from_vals(1, 1),
        InputSpec.from_vals(1, 10),
        InputSpec.from_vals(10, 1),
        InputSpec.from_vals(10, 1010),
    ],
    "binarysearch": [
        InputSpec.from_vals("{1, 2, 3, 54, 99, 127, 255}", 7, 255),
        InputSpec.from_vals("{1, 2, 3, 54, 99, 127, 255}", 7, 1),
        InputSpec.from_vals("{1, 2, 3, 54, 99, 127, 255}", 7, 2),
        InputSpec.from_vals("{1, 2, 3, 54, 99, 127, 255}", 7, 127),
        InputSpec.from_vals("{1, 2, 3, 54, 99, 127, 255}", 7, 99),
        InputSpec.from_vals("{1, 2, 3, 54, 99, 127, 255}", 7, 54),
        InputSpec.from_vals("{10, 20, 30, 54, 9, 127}", 6, 255),
        InputSpec.from_vals("{9, 7, 3, 54, 99, 127}", 6, 2),
    ],
    "binarysearchrec": [
        InputSpec.from_vals("{1, 2, 3, 54, 99, 127, 255}", 7, 255, 0, 6),
        InputSpec.from_vals("{1, 2, 3, 54, 99, 127, 255}", 7, 1, 0, 6),
        InputSpec.from_vals("{1, 2, 3, 54, 99, 127, 255}", 7, 2, 0, 6),
        InputSpec.from_vals("{1, 2, 3, 54, 99, 127, 255}", 7, 127, 0, 6),
        InputSpec.from_vals("{1, 2, 3, 54, 99, 127, 255}", 7, 99, 0, 6),
        InputSpec.from_vals("{1, 2, 3, 54, 99, 127, 255}", 7, 54, 0, 6),
        InputSpec.from_vals("{10, 20, 30, 54, 9, 127}", 6, 255, 0, 5),
        InputSpec.from_vals("{9, 7, 3, 54, 99, 127}", 6, 2, 0, 5),
        InputSpec.from_vals("{9, 7, 3, 54, 99, 127}", 6, 2, 5, 0),
    ],
    "minmax": [
        InputSpec.from_vals("{1, 2, 3, 54, 99, 127, 255}", 7),
        InputSpec.from_vals("{10, 20, 30, 54, 9, 127}", 6),
        InputSpec.from_vals("{9, 7, 3, 54, 99, 127}", 6),
    ],
    "bubblesort": [
        InputSpec.from_vals("{1, 2, 3, 54, 99, 127, 255}", 7, a=7),
        InputSpec.from_vals("{3, 1, 2, 0, 78, 27, 29}", 7, a=7),
        InputSpec.from_vals("{1, 2, 3, 4}", 4, a=4),
        InputSpec.from_vals("{6,5,4,3,2,1}", 6, a=6),
    ],
    "quicksort": [
        InputSpec.from_vals("{1, 2, 3, 54, 99, 127, 255}", 0, 6, x=7),
        InputSpec.from_vals("{3, 1, 2, 0, 78, 27, 29}", 0, 6, x=7),
        InputSpec.from_vals("{1, 2, 3, 4}", 0, 3, x=4),
        InputSpec.from_vals("{6,5,4,3,2,1}", 0, 5, x=6),
    ],
    "concatstrings": [
        InputSpec.from_vals('"a"', '"b"', str1=2),
        InputSpec.from_vals('"abxc"', '"aswd"', str1=8),
    ],
    "comparestrings": [
        InputSpec.from_vals('"aaaaaa"', '"b"', str1=6, str2=1),
        InputSpec.from_vals('"aaaaaa"', '"aaaaaa"', str1=6, str2=6),
        InputSpec.from_vals('"a"', '"b"', str1=1),
        InputSpec.from_vals('"abxc"', '"abxc"', str1=4),
        InputSpec.from_vals('"a"', '"bc"', str1=1, str2=2),
    ],
    "palindrome": [
        InputSpec.from_vals(535),
        InputSpec.from_vals(132),
        InputSpec.from_vals(1),
    ],
    "perfect": [
        InputSpec.from_vals(6),
        InputSpec.from_vals(28),
        InputSpec.from_vals(2),
    ],
    "frequency": [
        InputSpec.from_vals('"abxc"', "'a'", c=4),
        InputSpec.from_vals('"abxc"', "'b'", c=4),
        InputSpec.from_vals('"abxc"', "'z'", c=4),
        InputSpec.from_vals('""', "'a'", c=0),
    ],
    "randomFuns": [
        InputSpec.from_vals("{1233}", "{0}", output=1, input=1, localStaticState=1),
        InputSpec.from_vals("{1}", "{0}", output=1, input=1, localStaticState=1),
        InputSpec.from_vals("{0}", "{0}", output=1, input=1, localStaticState=1),
        InputSpec.from_vals("{-5}", "{0}", output=1, input=1, localStaticState=1),
    ],
    "stringtoASCII": [
        InputSpec.from_vals('"a"'),
        InputSpec.from_vals('"abxc"'),
        InputSpec.from_vals('""'),
    ],
    "simple-hash-functions": [
        InputSpec.from_vals('"a"', 1, str=1),
        InputSpec.from_vals('"aasd"', 4, str=4),
        InputSpec.from_vals('"sajd31e"', 7, str=7),
    ],
    "random2": [
        InputSpec.from_vals(0, localStaticState=2),
        InputSpec.from_vals(1, localStaticState=2),
        InputSpec.from_vals(2, localStaticState=2),
        InputSpec.from_vals(3, localStaticState=2),
        InputSpec.from_vals(4, localStaticState=2),
        InputSpec.from_vals(5, localStaticState=2),
        InputSpec.from_vals(6, localStaticState=2),
        InputSpec.from_vals(7, localStaticState=2),
    ],
    "size-5": [InputSpec.from_vals(i, localStaticState=2) for i in [0, 1, 2, 3, 4, 6]],
    "size-10": [InputSpec.from_vals(i, localStaticState=2) for i in range(10)],
    "size-15": [InputSpec.from_vals(i, localStaticState=2) for i in range(10)],
    "size-20": [InputSpec.from_vals(i, localStaticState=2) for i in range(10)],
    "size-30": [
        InputSpec.from_vals(i, localStaticState=2)
        for i in {0, 13, 17, 1, 15, 27, 1, 2, 3, 4, 5, 7, 9, 14, 15, 2, 12, 6}
    ],
    "mergesort": [
        InputSpec.from_vals("{1, 2, 3, 54, 99, 127, 255}", 0, 3, 6, arr=7),
        InputSpec.from_vals("{3, 1, 2, 0, 78, 27, 29}", 0, 3, 6, arr=7),
        InputSpec.from_vals("{3, 1, 2, 0, 78, 27, 29}", 5, 3, 6, arr=7),
        InputSpec.from_vals("{3, 1, 2, 0, 78, 27, 29}", 2, 3, 6, arr=7),
    ],
}


BASIC_ALGORITHMS_DATA = [
    ("random1.c", "randomFuns"),
    ("anagram.c", "anagram"),
    ("armstrong.c", "armstrong"),
    ("binaryadd.c", "binaryadd"),
    ("binarymult.c", "binarymult"),
    ("binarysearch.c", "binarysearch"),
    ("binarysearchrec.c", "binarysearchrec"),
    ("bubblesort.c", "bubblesort"),
    ("comparestrings.c", "comparestrings"),
    ("concatstrings.c", "concatstrings"),
    ("decimaltobinary.c", "1ints"),
    ("decimaltohex.c", "1ints"),
    ("decimaltooctal.c", "1ints"),
    ("factorial.c", "1ints"),
    ("factorialrec.c", "1ints"),
    ("fib.c", "1ints"),
    ("floyd.c", "1ints"),
    ("frequency.c", "frequency"),
    ("gcd.c", "2ints"),
    ("gcdrec.c", "2ints"),
    ("lcm.c", "2ints"),
    ("linearsearch.c", "binarysearch"),
    ("insertionsort.c", "bubblesort"),
    ("mergesort.c", "mergesort"),
    ("minmaxarray.c", "bubblesort"),
    ("multtable.c", "1ints"),
    ("perfect.c", "perfect"),
    ("prime.c", "1ints"),
    ("printinitials.c", "str_only"),
    ("pyramid.c", "1ints"),
    ("quicksort.c", "quicksort"),
    ("random.c", "1ints"),
    ("reverse.c", "alldigits"),
    ("romannumerals.c", "alldigits"),
    ("selectionsort.c", "bubblesort"),
    ("stringtoASCII.c", "stringtoASCII"),
    ("sumrec.c", "1ints"),
    ("vowels.c", "str_only"),
    ("numtowords.c", "alldigits"),
    ("palindrome.c", "palindrome"),
    ("iofile.c", "str_len"),
    ("legacy", "legacy"),
    ("bkdrhash.c", "simple-hash-functions"),
    ("bphash.c", "simple-hash-functions"),
    ("dekhash.c", "simple-hash-functions"),
    ("djbhash.c", "simple-hash-functions"),
    ("elfhash.c", "simple-hash-functions"),
    ("fnvhash.c", "simple-hash-functions"),
    ("jshash.c", "simple-hash-functions"),
    ("pjwhash.c", "simple-hash-functions"),
    ("rshash.c", "simple-hash-functions"),
    ("sdbmhash.c", "simple-hash-functions"),
    ("random2.c", "random2"),
    ("nohash.c", "simple-hash-functions"),
]


def load_ais_small_programs():
    AIS_PATH = Path(__file__).parent / "small_programs_input.json"
    if not AIS_PATH.exists():
        return {}

    with open(AIS_PATH) as f:
        ais = json.load(f)

    ais_result = {}
    for fn, inputs in ais.items():
        ais_result[fn] = [
            InputSpec.from_vals(len(inp), f"{{{', '.join(map(str, inp))}}}")
            for inp in inputs
        ]
    return ais_result

def load_ais_random_programs():
    AIS_PATH = Path(__file__).parent / "random_programs_input.json"
    if not AIS_PATH.exists():
        return {}

    with open(AIS_PATH) as f:
        ais = json.load(f)

    ais_result = {}
    for fn, inputs in ais.items():
        ais_result[fn] = [
            InputSpec.from_vals(inp, localStaticState=2)
            for inp in inputs
        ]
    return ais_result
        




SIZED = [5, 10, 15, 20, 30]
BASIC_ALGORITHMS_DATA += tuple(
    (f"{k[:-2]}-{i:03d}.c", v) for k, v in BASIC_ALGORITHMS_DATA for i in range(10)
)
BASIC_ALGORITHMS_DATA += tuple(
    (f"{i}-{j+1}.c", f"size-{i}") for i in SIZED for j in range(11)
)
BASIC_ALGORITHMS_DATA += tuple(
    (f"{i}-{j+1}-{k:03d}.c", f"size-{i}")
    for i in SIZED
    for j in range(11)
    for k in range(2)
)

INPUT_SPECS.update(load_ais_small_programs())
INPUT_SPECS.update(load_ais_random_programs())

BASIC_ALGORITHMS_DATA += tuple(zip(INPUT_SPECS, INPUT_SPECS))

for is_key in INPUT_SPECS:
    if not is_key.lower().endswith(".c"):
        continue
    
    src_name = is_key.removesuffix(".c")
    BASIC_ALGORITHMS_DATA += [(f"{src_name}-{_:03d}.c", is_key) for _ in range(10)]


BASIC_ALGORITHMS_INPUT_MAP = dict(BASIC_ALGORITHMS_DATA)
