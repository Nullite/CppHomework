#include <iostream>
#include <String>

int main()
{
    int charPosition;
    std::string userString;
    std::cout << "Enter a string.\n";
    std::getline(std::cin, userString);
    std::cout << "Enter a num of symbol position in the string and programm will delete it.\n";
    std::cin >> charPosition;
    userString.erase(charPosition, 1);
    std::cout << "new string is: " << userString << '\n';
}

