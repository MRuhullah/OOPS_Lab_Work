 
#include<stdio.h>
int main(){

    double amount,discount, disamout;

    printf("Enter the total amount of purchase\n");
    scanf("%lf",&amount);

    if(amount <= 100)
    printf("Sorry ! You don't get any discount");

    else if (amount > 100 && amount <= 500)
    {
        printf("You are eligible for a 10%% discount\n");
        discount = amount * 0.1;
        disamout = amount - discount;
        printf("The amount you have to pay after the discount is: %.2lf\n",disamout);
    }
    else if (amount > 500 && amount <= 1000)
    {
        printf("You are eligible for a 15%% discount\n");
        discount = amount * 0.15;
        disamout = amount - discount;
        printf("The amount you have to pay after the discount is: %.2lf\n",disamout);
    }

    else  if ( amount > 1000)
    {
        printf("You are eligible for a 20%% discount\n");
        discount = amount * 0.2;
        disamout = amount - discount;
        printf("The amount you have to pay after the discount is: %.2lf\n",disamout);
    }


    

    return 0;
 
}