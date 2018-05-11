#include <iostream>

int main()
{
    /*
    // Example 1
    int firstvalue, secondvalue;
    int * mypointer;

    mypointer = &firstvalue;
    *mypointer = 10;
    mypointer = &secondvalue;
    *mypointer = 20;
    std::cout << "firstvalue is " << firstvalue << std::endl;
    std::cout << "secondvalue is " << secondvalue << std::endl;
    return 0;
    */


    /*
    // Example 2
    int firstvalue = 5, secondvalue = 15;
    int * p1, * p2;

    p1 = &firstvalue;
    p2 = &secondvalue;
    *p1 = 10;
    *p2 = *p1;
    p1 = p2;
    *p1 = 20;

    std::cout << "firstvalue is " << firstvalue << std::endl;
    std::cout << "secondvalue is " << secondvalue << std::endl;
    return 0;
    */


    // Arrays and Pointers
    int numbers[5];
    int * p;
    p = numbers; *p = 10;
    p++; *p = 20;
    p = &numbers[2]; *p = 30;
    p = numbers + 3; *p = 40;
    p = numbers; *(p+4) = 50;
    for (int n=0; n<5; n++)
        std::cout << numbers[n] << ", ";
    return 0;
}
