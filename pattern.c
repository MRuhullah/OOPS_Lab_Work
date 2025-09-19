#include <stdio.h>
int main(int argc, char const *argv[])
{
    int rows;

    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < (2*i)-1; j++)
        {
            printf("X");
        }
        printf("\n");
    }
    
    return 0;
}

