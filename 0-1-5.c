#include <stdio.h>
int countdigit(int number,int digit);
int main()
{
	int num,n=0;
	printf("������һ������:");
	scanf("%d",&num);
	n=countdigit(num,2);
	printf("�����й���%d��2\n,n");
	
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
