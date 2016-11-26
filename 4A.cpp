#include <iostream>
#include <cstdint>

int main(void)
{
    uint16_t w = 0;
    std::cin >> w;

    if(w > 2 && w % 2 == 0)
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;
}