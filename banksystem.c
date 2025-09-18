#include<stdio.h>
int main() {
    float balance = 500;
    int choice;
    float amount;

  printf("Menu\n");
  printf("1.Deposit\n");
  printf("2.Withdraw\n");
  printf("3.Balance\n");
  printf("4.Exit\n");

  printf("Enter the choice you wanna make:\n");
  scanf("%d",&choice);

 switch(choice){
     case 1:
      
     printf("Enter the amount you wanna deposit:\n");
     scanf("%f",&amount);
     balance = balance + amount;
     printf("The total balance is:%.2f", balance);
     break;

     case 2:
     printf("Enter the amount you wanna withdraw;\n");
     scanf("%f",&amount);

      if (amount>balance)
      {
         printf("Insufficient balance!\n ");
      } 
      else
      {
         balance = balance - amount ;
      } 
         printf("Calculating.........\n");
         printf("Your remaining balance is %.2f",balance);
         break;

    case 3:
    printf("Your balance is %.2f", balance);

     default:

    printf("Exiting....Please wait");
 }

    return 0;
}