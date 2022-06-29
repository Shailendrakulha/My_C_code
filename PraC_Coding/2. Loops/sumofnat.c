#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	float avg,sum=0,num;
	printf("enter ur 5 numbers \n");
	for(i=1;i<=5;i++)
	{
		printf("%d.",i);
		scanf("%f",&num);
		sum = sum+num;
	}
	avg = (sum)/(5);
	printf("sum is %f\n",sum);
	printf("avg is %0.2f\n",avg);
	return 0;
	
}
