/*
Q6- Paper of size A0 has dimensions 1189mm x 841mm. Each susequent size A(n) is defined as A(n-1)cut in half parallel
    to its shorter sides. Thus paper of size A1 would have dimensions 841mm x 594mm.
    Wirte a program to csalculate & print paper sizes A0, A1, A2, .......A8.

*/

#include <stdio.h>

int main()
{
    int length = 1189, breadth = 841; // A0 dimensions
    int temp;

    printf("Paper sizes from A0 to A8:\n");

    for (int i = 0; i <= 8; i++)
    {
        printf("A%d: %d mm x %d mm\n", i, length, breadth);

        // Calculate next size
        temp = length;      // store current length
        length = breadth;   // new length = old breadth
        breadth = temp / 2; // new breadth = half of old length
    }

    return 0;
}
