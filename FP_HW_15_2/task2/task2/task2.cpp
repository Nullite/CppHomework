#include <iostream>
#include <String>

int main()
{
    char symbol;
    std::string userString;
    std::cout << "Enter a string.\n";
    std::getline(std::cin, userString);
    std::cout << "Enter a symbol and programm will delete all that symbols from your string.\n";
    std::cin >> symbol;
    userString.erase(std::remove(userString.begin(), userString.end(), symbol), userString.end());
    std::cout << "new string is: " << userString << '\n';
}
