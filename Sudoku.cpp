#include <iostream>
#include <string>
#include <ctime>
#include <sstream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

void Generation(string main_string)
{
    string newStr;
    for (int i = 0; i < main_string.length(); i++) {
        newStr += main_string[i];

        if (i < main_string.length() - 1) {
            newStr += " ";
        }

    }

    cout << "  " << newStr.substr(0, 5) << " " << newStr.substr(6, 5) << " " << newStr.substr(12, 5) << "\n" << endl;
    cout << "  " << newStr.substr(6, 5) << " " << newStr.substr(12, 5) << " " << newStr.substr(0, 5) << "\n" << endl;
    cout << "  " << newStr.substr(12, 5) << " " << newStr.substr(0, 5) << " " << newStr.substr(6, 5) << "\n" << endl;
}
    
void First_char(string main_string, int n)
{
    string newStr;
    if (n == 2)
    {
        main_string.erase(0, 2);

        char firstChar = main_string[0];
        main_string += firstChar;

        char second_Char = main_string[1];
        main_string += second_Char; 
    }
    if (n == 1)
    {
        main_string.erase(0, 1);

        char firstChar = main_string[0];
        main_string += firstChar;
    }
    Generation(main_string);
}

int main()
{
    srand(time(nullptr));

    vector<int> digits{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    random_shuffle(digits.begin(), digits.end());

    vector<int> result(digits.begin(), digits.begin() + 9);

    string main_string;

    for (int digit : result)
    {
        main_string += to_string(digit);
    }

    First_char(main_string, 0);
    First_char(main_string, 1);
    First_char(main_string, 2);

    return 0;
}
