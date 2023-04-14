import sys
from hypothesis import strategies as st

# Turn off the warning of st.examples()
if not hasattr(sys, "ps1"):
    sys.ps1 = ""

UINT_MAX = 2**16 - 1
# INT_MIN = -2**15
# INT_MAX = 2**15 - 1
INT_MIN = -10
INT_MAX = 10
SCHAR_MIN = -2**7
SCHAR_MAX = 2**7 - 1
UCHAR_MAX = 2**8 - 1
LONG_MIN = -2**63
LONG_MAX = 2**63 - 1
ULONG_MAX = 2**64 - 1

UINT32_MAX = 2**32 - 1
INT32_MIN = -2**31
INT32_MAX = 2**31 - 1

C_TYPE_STRATEGY_MAPPER = {
    "int": st.integers(min_value=INT_MIN, max_value=INT_MAX),
    "long": st.integers(min_value=INT_MIN, max_value=INT_MAX),
    "unsigned int": st.integers(min_value=0, max_value=UINT_MAX),
    "unsigned long": st.integers(min_value=0, max_value=ULONG_MAX),
    "char": st.integers(min_value=SCHAR_MIN, max_value=SCHAR_MAX),
    "unsigned char": st.integers(min_value=0, max_value=UCHAR_MAX),

    "int32_t": st.integers(min_value=INT32_MIN, max_value=INT32_MAX),
    "uint32_t": st.integers(min_value=0, max_value=UINT32_MAX),
    "size_t": st.integers(min_value=0, max_value=UINT_MAX),
}


def generate_examples(c_type: str, num_examples: int = 100) -> set:
    strategy = C_TYPE_STRATEGY_MAPPER.get(c_type)
    if strategy is None:
        raise ValueError(f"Unknown C type: {c_type}")
    
    results = set()
    for _ in range(num_examples * 2):
        results.add(strategy.example())
        if len(results) >= num_examples:
            break

    return results


if __name__ == "__main__":
    print(generate_examples("unsigned char", 100))
