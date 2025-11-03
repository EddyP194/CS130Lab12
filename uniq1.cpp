#include <iostream>
#include <memory>

int main(){
    int num = 100;
    std::unique_ptr<int> ptr1;
    ptr1 = std::make_unique<int>(num);
    std:: cout << *ptr1 << std::endl;

    std::unique_ptr<int> ptr2;
    //ptr2 = std::make_unique<int>(*ptr1);
    ptr2 = move(ptr1);
    //std::cout << *ptr1 << std::endl;
    std::cout << *ptr2 << std::endl;

    std::cout << ptr2.get() << std::endl;
    int *rawptr = ptr2.get();
    std::cout << *rawptr << std::endl;

    std::unique_ptr<int []> p3 = std::make_unique<int[]>(5); // declaration and assignation in the same line
    p3[0] = 100;
    p3[1] = 200;
    p3[2] = 300;
    std::cout << p3[0] << std::endl;
    std::cout << p3[1] << std::endl;
    std::cout << p3[2] << std::endl;
}