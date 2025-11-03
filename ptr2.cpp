#include <iostream>

int *myfn(){
    int num = 100;
    int *ptr = &num;
    int *ptr = new int;
    *ptr = num;
    std::cout << "In the function : " << *ptr << std::endl;
}

int main()
{
    int *ptr;
    ptr = myfn();
    std::cout << "In main : " << *ptr << std::endl;

}