#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int cab; // The names without spaces are allowed to be considered as a variable name
    int Abhi;
    int Abhi_good;     // Underscore symbol is allowed in variable names
    int Abhi is good;  // This not allowed
    int Abhi #good;    // Special characters in a variable is not allowed
    int Abhi(()) good; // Brackets are not allowed in variable
    int _Abhi; // underscore as a first letter is allowed.
    return 0;
}