

#include <iostream>
#include <cstdint>

int main(void)
{
    uint64_t n = 0, m = 0, a = 0;
    std::cin >> n >> m >> a;
    uint64_t columns = m / a;
    if(m % a != 0)
        columns ++;
    uint64_t rows = n / a;
    if(n % a != 0)
        rows ++;
    uint64_t result = columns * rows;
    std::cout << result;
    return 0;
}