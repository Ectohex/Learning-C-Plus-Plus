#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int drink;
    cout << "===== Welcome to Soda Machine =====" << endl;
    cout << "We offer the following drinks here:\n1. Cola\n2. Mtn Dew\n3. Dr. Pepper\n4. Sprite\n5. Water\n\n> ";
    cin >> drink;
    if (drink == 1)
        cout << "Here is your cola!\nHave a nice day!" << endl;
    else if (drink == 2)
        cout << "Here is your mtn dew!\nHave a nice day!" << endl;
    else if (drink == 3)
        cout << "Here is your dr. pepper!\nHave a nice day!" << endl;
    else if (drink == 4)
        cout << "Here is your sprite!\nHave a nice day!" << endl;
    else if (drink == 5)
        cout << "Here is your water!\nHave a nice day!" << endl;
    else
        cout << "Invalid drink type." << endl;
    return 0;
}
