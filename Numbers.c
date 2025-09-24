#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double num;
    double sum = 0.0, sum_squares = 0.0;
    double min, max;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input. N must be greater than 0.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter value #%d: ", i + 1);
        scanf("%lf", &num);

        if (i == 0)
        {
            min = max = num;
        }

        if (num < min)
            min = num;
        if (num > max)
            max = num;

        sum += num;
        sum_squares += num * num;
    }

    double average = sum / n;
    double range = max - min;
    double std_dev = sqrt((sum_squares / n) - (average * average));

    printf("\nResults:\n");
    printf("Smallest value: %.2lf\n", min);
    printf("Largest value : %.2lf\n", max);
    printf("Average       : %.2lf\n", average);
    printf("Range         : %.2lf\n", range);
    printf("Std Deviation : %.2lf\n", std_dev);

    return 0;
}
