#include <iostream>

#define PRINT_JOE

int main()
{
#ifdef PRINT_JOE
    std::cout << "Joe defined\n"; // if PRINT_JOE is defined, compile this code
#endif

#ifndef PRINT_BOB
    std::cout << "Bob not defined\n"; // if PRINT_BOB is defined, compile this code
#endif

#if 0
    std::cout << "Wont print";
#endif
    return 0;
}