#include <stdio.h>
int countdigit(int number,int digit);
int main()
{
	int num,n=0;
	printf("请输入一个整数:");
	scanf("%d",&num);
	n=countdigit(num,2);
	printf("该数中共有%d个2\n,n");
	
}
  int countdigit(int number,int digit)
  {
  	int temp,i=0;
  	do
  	{
  		temp=number%10;
  		if(temp==digit)
  		i+=1;
  		number/10;
	  }
	  while(number!=0);
	  return i;
  }
