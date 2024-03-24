#include <iostream>
#include <typeinfo>

void exploreDataTypes() {
    int num = 10;
    float pi = 3.14;
    char letter = 'A';
    bool flag = true;
    int* ptr = &num;
    int& ref = num;

    std::cout << "Type of num: " << typeid(num).name() << std::endl; // Type of num: i
    std::cout << "Type of pi: " << typeid(pi).name() << std::endl; // Type of pi: f
    std::cout << "Type of letter: " << typeid(letter).name() << std::endl; // Type of letter: c
    std::cout << "Type of flag: " << typeid(flag).name() << std::endl; // Type of flag: b
    std::cout << "Type of ptr: " << typeid(ptr).name() << std::endl; // Type of ptr: Pi
    std::cout << "Type of ref: " << typeid(ref).name() << std::endl; // Type of ref: i
}

int main() {
    exploreDataTypes();
    return 0;
}
