#include <iostream>
#include <string>

int main()
{
    int countLetters = 0;
    int countDigits = 0;
    int countSymbols = 0;
    std::string userString;
    std::cout << "Enter a string\n";
    getline(std::cin, userString);
    
    for (int i = 0; i < userString.length(); i++)
    {
        if (userString[i] > 47 && userString[i] < 58)
            countDigits++;

        else if (userString[i] > 64 && userString[i] < 91 || userString[i] > 96 && userString[i] < 123)
            countLetters++;

        else countSymbols++;
    }
    std::cout 
        << "letters in this string: " << countLetters << '\n'
        << "Digits in this string: " << countDigits << '\n'
        << "Other symbols in this string: " << countSymbols << '\n';
}
