# NOTES

Unroll and Fission obfuscations not necessarily sound if assignment (like k++) in loop guard.

Unroll and Fission obfuscations could also be unsound with certain uses of break that I need to think more about.

# Sampling obfuscations

```
python batch_runner.py --sample=2 -s specs/obfus1.yml -o output tests/basic-algorithms && \
python batch_runner.py --sample=2 -s specs/obfus2.yml -o output tests/basic-algorithms && \
python batch_runner.py --sample=2 -s specs/obfus3.yml -o output tests/basic-algorithms

python batch_runner.py --sample=2 -s specs/obfus1.yml -o output tests/simple-hash-functions/ && \
python batch_runner.py --sample=2 -s specs/obfus2.yml -o output tests/simple-hash-functions/ && \
python batch_runner.py --sample=2 -s specs/obfus3.yml -o output tests/simple-hash-functions/

python batch_runner.py -s specs/untested.yml -o output tests/basic-algorithms
python batch_runner.py -s specs/untested.yml -o output tests/simple-hash-functions

python batch_runner.py --sample=2 -s specs/obfus1.yml -o output tests/new && \
python batch_runner.py --sample=2 -s specs/obfus2.yml -o output tests/new && \
python batch_runner.py --sample=2 -s specs/obfus3.yml -o output tests/new

python random_func_helper.py --visitor_type=small_program --validate --output=tests/small-programs-2 tests/small-programs-raw

python batch_runner.py --sample=2 -s specs/obfus1.yml -o output tests/small-programs && \
python batch_runner.py --sample=2 -s specs/obfus2.yml -o output tests/small-programs && \
python batch_runner.py --sample=2 -s specs/obfus3.yml -o output tests/small-programs
```

# Generate Random Programs

```bash
python batch_runner.py --repeat=10 -s specs/random.yml -o tests/sized-random specs



for i in 5 10 15 20 30
do
    python batch_runner.py --sample=2 -s specs/obfus1.yml -o output "tests/sized-random/size-$i" && \
        python batch_runner.py --sample=2 -s specs/obfus2.yml -o output "tests/sized-random/size-$i" && \
        python batch_runner.py --sample=2 -s specs/obfus3.yml -o output "tests/sized-random/size-$i"
done

```

```
rm test.c && vi test.c && \
clang -emit-llvm -g -O0 -c test.c -o test.bc && klee test.bc && ktest-tool klee-last/test*.ktest
```
