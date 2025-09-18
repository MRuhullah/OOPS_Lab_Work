#include<stdio.h>
#include <math.h>
int main()
{
  int ral1,ral2;
  int img1,img2;

  printf("Enter the first  number\n");
  scanf("%d %d", &ral1, &img1 );

  printf("Enter the  second  number\n");
  scanf("%d %d", &ral2, &img2 );

  printf("You entered first number as :%d+%di\n", ral1,img1);
  printf("You entered second number as :%d+%di\n", ral2,img2);

  int mag1 = sqrt(ral1*ral1 + img1*img1);
  int mag2 = sqrt(ral2*ral2 + img2*img2);

  if(mag1>mag2)
  {
    printf("The first complex number is bigger than the second");
  }
   else if (mag2>mag1)
   {
   printf("The  second complex number is bigger than the  first");
   }
   else
  {
   printf("They both are equal");
}
   return 0;
}
