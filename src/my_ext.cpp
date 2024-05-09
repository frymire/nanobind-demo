#include <nanobind/nanobind.h>
#include <iostream>
using std::cout;
using std::endl;

int add(int a, int b) {
    cout << a << " + " << b << " = " << endl;
    return a + b;
}

NB_MODULE(my_ext, m) {
    // Think of this as a main() that will run when importing this module into a python session.
    m.def("add", &add);
}
