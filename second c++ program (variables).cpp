//c++ variables
#include <iostream>
using namespace std;

main()
{
    //initializing variables
    //3 ways to initialize values: =, (), {}
    int foo = 0;
    int a = 5; //initial value: 5
    int b (3); //initial value: 3
    int c {2}; //initial value: 2
    int result; //initial value undetermined
    auto bar = foo; //same as: int bar;

    //process
    a = a + b;
    result = a - c;


    //print the results
    cout << result;

    //terminate the program
    return 0;
}
