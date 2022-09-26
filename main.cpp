#include <iostream>
#include <string>

int test(long *ptr) {
    (*ptr)++;
}

int main() {
    std::string str = "Hello, world!";
    long a = 1;
    long b = 3;
    long c = a + b;
    long &ref = c;
    long *ptr = &c;
    long *ptr_1 = nullptr;
    test(ptr_1);
    //(*ptr_1)++;
    std::cout << ref << std::endl;
    std::cout << ptr << std::endl;
    return 0;
}
