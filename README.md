# nanobind-demo
Proof that I can call C++ functions from Python using Nanobind

## Build
Install nanobind...  
`
python -m pip install nanobind
`  

Make sure CMake is installed, version 3.15+ is required. Then...  
`
cmake -S . -B build
cmake --build build
`
