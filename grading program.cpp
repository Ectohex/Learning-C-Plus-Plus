#include <iostream>
#include <string>
#include <sstream>
using namespace std;

main()
{
    int grade;
    cout << "== Welcome to the Grade Machine ==\nPlease enter your grade: ";
gradeTag:
    cin >> grade;
    switch (grade){
        case 59: cout << "Your grade is an F\n";
                 break;
        case 69: cout << "Your grade is a D\n";
                 break;
        case 79: cout << "Your grade is a C\n";
                 break;
        case 89: cout << "Your grade is a B\n";
                 break;
        case 99: cout << "You got an A\n";
                 break;
        case 100: cout << "You got a perfect score!";
                 break;
        default: cout << "Invalid grade, please exit this program and run it again.\n";
                 break;
    }
    return 0;
}
