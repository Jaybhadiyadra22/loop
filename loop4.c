#include<stdio.h>
main()
{
  int i=1,n;
  printf("Enter n : ");
  scanf("%d",&n);
  i=n;
  do
  {
     printf("%d\t",i);
     i--;
  }
  while(i>=1);
  
}
