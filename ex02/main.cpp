#include "Array.hpp"
#include <iostream>
void testArrayInt() {
    Array<int> a(5);
    for (unsigned int i = 0; i < a.size(); i++) {
        a[i] = i * 2;
    }
    for (unsigned int i = 0; i < a.size(); i++) {
        std::cout << "a[" << i << "] = " << a[i] << std::endl;
    }
}

void testArrayString() {
    Array<std::string> a(3);
    a[0] = "Hello";
    a[1] = "World";
    a[2] = "!";
    for (unsigned int i = 0; i < a.size(); i++) {
        std::cout << "a[" << i << "] = " << a[i] << std::endl;
    }
}

void testArrayCopy() {
    Array<int> a(5);
    for (unsigned int i = 0; i < a.size(); i++) {
        a[i] = i * 2;
    }
    Array<int> b = a;
    for (unsigned int i = 0; i < b.size(); i++) {
        std::cout << "b[" << i << "] = " << b[i] << std::endl;
    }
}

void testArrayOutOfBounds() {

    try {
        Array<int> a;
        std::cout << a[10] << std::endl;
    } catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}

int main() {
    std::cout << "Testing Array<int>:" << std::endl;
    testArrayInt();
    std::cout << "Testing Array<std::string>:" << std::endl;
    testArrayString();
    std::cout << "Testing Array copy:" << std::endl;
    testArrayCopy();
    std::cout << "Testing Array out of bounds:" << std::endl;
    testArrayOutOfBounds();
    return 0;
}