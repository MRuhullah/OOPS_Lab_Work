#include<stdio.h>
int main(){
    int SUB1,SUB2,SUB3,SUB4,SUB5,Scored_marks;
    float percentage;
    int failcount = 0;

    printf("Enter the marks for five subjects\n");
    scanf("%d %d %d %d %d",&SUB1,&SUB2,&SUB3,&SUB4,&SUB5);

    if(SUB1 <= 35)
    failcount ++;

      if(SUB2 <= 35)
    failcount ++;


      if(SUB3 <= 35)
    failcount ++;


      if(SUB4 <= 35)
    failcount ++;


      if(SUB5 <= 35)
    failcount ++;


    Scored_marks = SUB1+ SUB2+ SUB3+ SUB4+ SUB5;
    printf("Total marks that you scored are: %d\n",Scored_marks);

    percentage =   Scored_marks/500.0 * 100; // one of them should be al least float
    printf("Your percentage is %.2f %%\n", percentage);

    if (percentage >= 90)

    printf("Grade: A");

    else if(percentage >= 75)

    printf("Grade: B");

    else if(percentage >= 60)

    printf("Grade: C");

    else if(percentage >= 45)

    printf("Grade: D");

    else if(percentage > 30)

    printf("Grade: E");

    else if(percentage > 0 && percentage <= 30 )

    printf("Grade: F");

    else if (failcount > 1){

    printf("Sorry to Inform......You have failed\n");
    printf("REPEAT  YEAR");
    }

    return 0;
}