from pathlib import Path
import json
import re

SRC_PATH = Path(__file__).parent

def find_pattern_in_file(file_path):
    pattern = re.compile(r'//\s*((\d+\s*)+)')

    with open(file_path, 'r') as file:
        result = []
        for line in file:
            match = pattern.search(line)
            if match:
                numbers = [int(num) for num in match.group(1).split()]
                result.extend(numbers)

    return result




def main():
    input_map = {}
    EXISTED = {0, 13, 17, 1, 15, 27, 1, 2, 3, 4, 5, 7, 9, 14, 15, 2, 12, 6}

    for path in SRC_PATH.rglob("*.c"):
        inputs = find_pattern_in_file(path)
        size = int(path.name.split("-")[0])
        if max(inputs) < 10 and size in [5, 10, 15, 20]:
            continue
        
        if EXISTED.issuperset(inputs):
            continue

        input_map[path.name] = inputs
    
    with open(SRC_PATH / "random_input_map.json", "w") as f:
        json.dump(input_map, f, indent=2)

if __name__ == "__main__":
    main()



    