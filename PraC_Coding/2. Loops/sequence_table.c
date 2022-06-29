#include<stdio.h>
int main()
{	
	int i,n,k,j;
	printf("Enter table No upto which it is to be printed.\n");
	scanf("%d",&n);
	for(j=1;j<n;j++)
	{
		for (k=j;k<=10;k++)
		{
			for(i=1;i<=10;i++)
				{
		 			printf("%d X %d = %d\n",n,i,n*i);
				}
	
		}
	}
	return 0;
	}

