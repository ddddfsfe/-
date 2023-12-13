#include <stdio.h>
int main()
{
	int lower,upper,fahr;
	double celsius;
	printf("Enter lower:");
	scanf("%d",&lower);
	printf("Enter upper:");
	scanf("%d",&upper);
	if(lower<=upper){
		printf("fahr celsius\n");
		for(fahr=lower;fahr<=upper;fahr=fahr+2){
			celsius=(5.0/9.0)*(fahr-32);
			printf("%4d%6.lf\n",fahr,celsius);
		}
	}else{
		printf("Invalid Value!\n");
	}
	return 0;
	
 } 
