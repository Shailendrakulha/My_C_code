#include<stdio.h>
int main()
{
    int num,temp,rem,res,dig=1000;
    temp=res=rem=0;
    printf("enter a number ");
    scanf("%d",&num);
    
    temp=num;
    while(temp>0)
    {
        rem= temp%10;//            123%10=3                12%10=2             1%10=1
        res= res*10 + rem;//        0*10+ 3                 3*10+ 2=32          32*10+ 1=321
        temp= temp/10;//            123/10=12               12/10= 1            1/10=0                                                                                                                                                                            
    }
    printf("reverse of %d is %d",num,res);
    return 0;
}
