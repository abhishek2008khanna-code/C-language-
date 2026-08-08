#include <stdio.h>
int main()
{
    int year, day;
    printf("Enter year: ");
    scanf("%d", &year);
    day = (year + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
    // 0=Monday, 1=Tuesday,... 6=Sunday assuming 01/01/01 was Monday
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    printf("1st January of year %d is %s\n", year, days[day]);
    return 0;
}