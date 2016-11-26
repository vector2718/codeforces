#include <iostream>
#include <cstdint>
#include <cstdio>
#include <string>

int main(void)
{
    uint16_t n = 0;
    std::cin >> n;

    // to ignore \n
    std::cin.ignore(1);

    for(std::size_t i = 0; i < n; ++ i)
    {
        std::string word;
        std::getline(std::cin, word);
        if(word.length() > 10)
        {
            std::string result;
            result += word.at(0);
            result += std::to_string(word.length() - 2);
            result += word.at(word.length() - 1);
            std::cout << result << std::endl;
        }
        else
        {
            std::cout << word << std::endl;
        }
    }

    return 0;
}