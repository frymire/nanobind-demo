#include <nanobind/nanobind.h>
#include <iostream>

int add(int a, int b) {
    std::cout << "Hi" << std::endl;
    return a + b;
}

NB_MODULE(my_ext, m) {
    // Think of this as a main() that will run when importing this module into a python session.
    m.def("add", &add);
}
