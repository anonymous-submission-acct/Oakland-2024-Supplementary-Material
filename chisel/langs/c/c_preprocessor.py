import re

class CPreprocessor:

    def _remove_tigress_jumptab(self, code_lines: list[str]):
        """Removes the jumptable from the code in place.

        Arguments:
        code_lines (list[str]) -- list of lines of code

        Returns:
        None -- list of lines of code with jumptable removed is modified in place
        """
        
        lab_name = None
        for i, c in enumerate(code_lines):
            if not "jumpTab" in c and not "&&" in c and not "lab" in c:
                continue

            line = code_lines[i]
            if "&&" in c and "{" in c and "jumpTab" in c:
                code_lines[i] = line[:line.index("=")] + "= {(void*)0};\n"
                lab_end_idx = line.index(",") if "," in line else line.index("}")
                lab_name = line[line.index("&&") + 2:lab_end_idx].strip()
            elif "&&" in c and (re.search("jumpTab[_\d]*\[\d+\] =", c) or " = &&" in c):
                code_lines[i] = line[:line.index("=")] + "= (void*) 0;\n"
                lab_end_idx = line.index(";")
                lab_name = line[line.index("&&") + 2:lab_end_idx].strip()
            elif "&&" in c and c.count("&&") > 10:
                code_lines[i] = ""
            
            if "goto *(" in c:
                if lab_name is None:
                    code_lines[i] = "// " + c
                else:
                    code_lines[i] = "goto " + lab_name + "; \n"
