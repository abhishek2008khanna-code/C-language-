// 1- Sequence Control Instruction:

#include <stdio.h>

int main()
{
    int a = 1, b = 2, sum;
    sum = a + b;
    printf("sum = %d\n", sum);

    return 0;
}

// 2- Decision Control Instruction:

#include <stdio.h>
int main()
{
    int age = 18;
    if (age >= 18)
    {
        printf("You are eligible to vote.\n");
    }
    else
    {
        printf("You are not eligible to vote.\n");
    }
    return 0;
}

// 3- Loop Control Instruction:

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("Number: %d\n", i);
    }
    return 0;
}

// 4- Case Control Instruction:

#include <stdio.h>
int main()
{
    int choice = 2;
    switch (choice)
    {
    case 1:
        printf("Option 1 selected.\n");
        break;
    case 2:
        printf("Option 2 selected.\n");
        break;
    case 3:
        printf("Option 3 selected.\n");
        break;
    default:
        printf("Invalid choice.\n");
    }
    return 0;
}
