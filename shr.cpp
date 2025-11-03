#include <iostream>
#include <memory>

int main(){
    std::shared_ptr<int> ptr1 = std::make_unique<int>(100);

    std::shared_ptr<int> ptr2;
    ptr2 = ptr1;
    std::cout << *ptr1 << std::endl;
    std::cout << *ptr2 << std::endl;
    int *ptr;
    ptr = ptr2.get();
    std::cout << "Reference count " << ptr1.use_count() << std::endl;
    std::cout << "ptr value " << *ptr << std::endl;

    //int *ptr;
    //ptr = new int;

}