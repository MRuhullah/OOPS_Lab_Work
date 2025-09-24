#include <stdio.h>

int main()
{
    int year, count = 0;

    printf("Enter a year: ");
    scanf("%d", &year);

    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
 
        int next = year + 1;
        
        printf("Next 5 leap years:\n");

        while (count < 5)
        {
            if ((next % 4 == 0 && next % 100 != 0) || (next % 400 == 0))
            {
                printf("%d\n", next);
                count++;
            }
            next++;
        }
    }

    return 0;
}
