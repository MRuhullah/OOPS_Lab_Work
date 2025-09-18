#include<stdio.h>
#include<math.h>
int main(){

    double num1, num2,result;
    char operator;
     printf("Enter two numbers\n");
     scanf("%lf %lf", &num1,&num2);

     printf("Enter the operation you wanna perform on numbers(+,-,/,*,%%)\n");
     scanf (" %c", &operator);

     result = (operator == '+') ? num1 + num2 : 
              (operator == '-') ? num1 - num2 : 
              (operator == '*') ? num1 * num2 : 
              (operator == '/'&& num2!= 0) ? num1 / num2 :
              (operator == '%'&& num2 != 0) ? fmod(num1,num2) : 0;

              if      ((operator == '+') || 
                       (operator == '-') || 
                       (operator == '*') || 
                       (operator == '/' && num2 != 0) || 
                       (operator == '%' && num2 != 0))
                
                printf("The result is: %.2lf\n", result);

              else

                printf("You entered invalid operator\n");
              
    return 0;
}