import yaml
from itertools import product

C_OBF = {"loop-unroll", "loop-fission", "irrelevant-code"}
TIGRESS_OBF = {"flatten", "deadcode", "block-fission"}

def obf_comb_is_valid(obf_comb):
    # check if obf from C_OBF always appear
    # before obf from TIGRESS_OBF
    last_c_obf_idx = -1
    last_ti_obf_idx = -1
    for i, obf in enumerate(obf_comb):
        if obf in C_OBF:
            last_c_obf_idx = i
        elif obf in TIGRESS_OBF:
            last_ti_obf_idx = i
        else:
            raise ValueError(f"Unknown obfuscation {obf}")
        
    if last_c_obf_idx > last_ti_obf_idx and last_ti_obf_idx != -1:
        return False
    return True

def generate_spec(file_name, obf_size=3):
    spec = set()
    for obf_comb in product(C_OBF | TIGRESS_OBF, repeat=obf_size):
        if obf_comb_is_valid(obf_comb):
            spec.add(tuple(obf_comb))
    spec = list(sorted(spec))
    spec_defn = {
        "name": f"obfus{obf_size}",
        "tigress": "_tigress_base.yml",
        "variants": spec,
    }

    with open(file_name, "w") as f:
        yaml.safe_dump(spec_defn, f, default_flow_style=None, sort_keys=False)

if __name__ == "__main__":
    generate_spec("obfus1.yml", 1)
    generate_spec("obfus2.yml", 2)
    generate_spec("obfus3.yml", 3)
