#include <iostream>
#include <string>

int main()
{
    std::string userString;
    std::cout << "Enter a string and programm will replace all \".\" symbols by \"!\" symbols\n";
    getline(std::cin, userString);

    for (int i = 0; i < userString.length(); i++)
    {
        if (userString[i] == '.')
               userString.replace(i, 1, "!");  
    }
    
    std::cout << userString << '\n';
}

