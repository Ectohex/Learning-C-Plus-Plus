#include <iostream>
#include <string>

int main()
{
    char question1[] = "What is your name?\n> ";
    std::string question2 = "Where do you live?\n> ";
    char answer1 [80];
    std::string answer2;
    std::cout << question1;
    std::cin >> answer1;
    std::cout << question2;
    std::cin >> answer2;
    std::cout << "Hello, " << answer1;
    std::cout << " from " << answer2 << "!" << std::endl;
    return 0;
}
