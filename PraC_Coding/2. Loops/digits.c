/*
Wap to know no of digits a give number have?

*/
#include<stdio.h>
int main()
{
    int n,temp,count=0,dig;

    printf("Enter a number ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    printf("%d is number of digits in %d",count,n);

return 0;
}
