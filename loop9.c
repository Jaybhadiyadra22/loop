#include<stdio.h>
int main()
{
  int num, i=1;
  printf("Enter number: ");
  scanf("%d",&num);
  printf("Factors of %d are:\n", num);
  do
  {
    if(num%i==0) printf("%d\t",i);
    i++;
  } while (i<=num/2);
}
