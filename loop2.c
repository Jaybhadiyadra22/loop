#include<stdio.h>
int main()
{
	int num = 10;
	int target = 1;
	 do
	 {
		printf("%d\n", num);
		--num;
	 }
	 while (num >= target);
}
