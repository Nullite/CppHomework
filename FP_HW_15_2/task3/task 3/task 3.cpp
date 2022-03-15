#include <iostream>
#include <String>

int main()
{
    int position;
    std::string symbol;
    std::string userString;
    std::cout << "Enter a string.\n";
    std::getline(std::cin, userString);
    std::cout << "Enter a symbol to insert.\n";
    std::cin >> symbol;
    std::cout << "Enter a position you want to insert that symbol.\n";
    std::cin >> position;
    userString.insert(position, symbol);
    std::cout << userString << '\n';
}

