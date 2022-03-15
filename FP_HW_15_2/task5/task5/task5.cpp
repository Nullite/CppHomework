#include <iostream>
#include <string>

int main()
{
    int count = 0;
    char symbol;
    std::string userString;
    std::cout << "Enter a string\n";
    getline(std::cin, userString);
    std::cout << "enter a symbol and programm will count how many times it occurs in string\n";
    std::cin >> symbol;

    for (int i = 0; i < userString.length(); i++)
    {
        if (userString[i] == symbol) count++;
    }
    std::cout << "this symbol oocurs in your string " << count << " times\n";
}