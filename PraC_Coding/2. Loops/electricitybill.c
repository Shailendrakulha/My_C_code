#include<stdio.h>
int main()
{
	int i,amt=0,unt,srchg=0;
	printf("Enter unit consumes\n");
	scanf("%d",&unt);
	
	if(unt>=0 && unt<200)
	{
	amt= 1.20*unt;
				if(amt<100)
				{
					amt=100;
				}
	}
	else if(unt>200 && unt<400)
	{
		amt= 1.50*unt;
	}
	else if( unt>400 && unt<600)
	{
		amt= 1.80*unt;
	}
	else if( unt>600)
	{
		amt=2.00*unt;
		
	}
	if (amt>400)
	{
		srchg= (amt*15)/100;
		amt = amt+srchg;
	}
	printf("Amount of ur bill is %d\n",amt);
	printf("Surcharge is %d\n",srchg);
}
