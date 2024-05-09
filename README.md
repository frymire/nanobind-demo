# nanobind-demo
Proof that I can call C++ functions from Python using Nanobind

## Build
Open this repo in PyCharm, setting up a local virtual environment with python 3.10.+ as the interpreter. Then, install nanobind...  
`
python -m pip install nanobind
`

Make sure CMake 3.15+ is installed. Then from the terminal command line...  
```
cmake -S . -B build
```
```
cmake --build build
```
If you make any changes to the C++ code, re-run the last line. 

## Run
`
python invoke_it.py
`
