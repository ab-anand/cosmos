#include <iostream>

int main()
{
    int d = 1;
    
    while (!(
        (d % 11 == 0) &&
        (d % 12 == 0) &&
        (d % 13 == 0) &&
        (d % 14 == 0) &&
        (d % 15 == 0) &&
        (d % 16 == 0) &&
        (d % 17 == 0) &&
        (d % 18 == 0) &&
        (d % 19 == 0) &&
        (d % 20 == 0)
    ))
        ++d;
    
    std::cout << d << "\n";
}