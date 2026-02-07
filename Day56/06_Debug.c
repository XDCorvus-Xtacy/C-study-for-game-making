#include <stdio.h>

#ifndef NDEBUG
    #define MODEMESSAGE "Debug mode"
#else
    #define MODEMESSAGE "Release mode"
#endif

int main(void)
{
    puts(MODEMESSAGE);
    return 0;
}