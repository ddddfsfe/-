#include <stdio.h>
int main()
{int a=1;
float sum=0;
for(a=a+1;a<=100;a++){
	sum=sum+1.0/a;
}printf("%f",sum);
return 0;
}
