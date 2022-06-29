#include<stdio.h>
int main()
{
	int i,j,sq,n;
	printf("Enter no upto which square is to be calculate\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i*i*i);
	}
	return 0;
}
