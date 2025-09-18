 
#include <stdio.h>

int main()
{
    int N;
    float flux_start;
    float flux_end;
    float time;
    float emf;

    printf(" Faraday's Law - EMF Calculator\n");

    printf("Enter number of turns (N): ");
    scanf("%d", &N);

    printf("Enter initial magnetic flux (Wb): ");
    scanf("%f", &flux_start);

    printf("Enter final magnetic flux (Wb): ");
    scanf("%f", &flux_end);

    printf("Enter time interval (seconds): ");
    scanf("%f", &time);

    if (time <= 0)
    {
        printf(" Time interval must be greater than zero.\n");
        return 1;
    }

    emf = -N * (flux_end - flux_start) / time;

    printf("\n Induced EMF = %.2f Volts\n", emf);

    return 0;
}
 