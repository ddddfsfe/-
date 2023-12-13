#include <stdio.h>
int main()
{int i,n;
double sum;
printf("Enter n:");
scanf("%d",&n);
sum=0;
for(i=1;i<=n;i++){
	sum=sum+1.0/i;
}printf("%lf",sum);
return 0;
}
