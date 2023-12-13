#include <stdio.h>
int main()
{int a=1;
float sum=0;
while(a<=100){
	a=a+1;
	sum=sum+1.0/a;
}printf("%f\n",sum);
return 0;
}

