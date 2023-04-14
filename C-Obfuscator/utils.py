import random
import string
from typing import Any, List

def set_random_seed(s: int):
    random.seed(s)

def rand_int(start: int, stop: int):
    return random.randint(start, stop)

def choose_rand(l: List[Any]) -> Any:
    return random.choice(l)

def rand_char() -> str:
    return choose_rand(string.ascii_letters)

def shuffle(l: List[Any]):
    return random.sample(l, len(l))
