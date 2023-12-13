#include <stdio.h>
int main()
{int i=1;
double sum=0;
while(i<=100){
	sum=sum+1.0/i;
	i=i+1;
}printf("%lf",sum);
return 0;
}
