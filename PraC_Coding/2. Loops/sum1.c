#include<stdio.h>
int main()
{
	int i,n, a[20],sum=0;
	printf("enter value of numbers to add\n");
	scanf("%d",&n);
	printf("write now\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("you entered\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
		
	}
	
	
	for(i=1;i<=n;i++)
   	{
	sum=sum+a[i];
//	printf(" %d",sum);
	}
	printf("sum is %d",sum);
	return 0;
}
