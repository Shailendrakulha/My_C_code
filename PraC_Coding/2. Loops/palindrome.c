#include<stdio.h>
int main()
{
    int num,temp,rem,res;
    temp=res=rem=0;
    printf("enter a number");
    scanf("%d",&num);
    
    temp=num;
    while(temp>0)
    {
        rem= temp%10;							//            123%10=3                12%10=2             1%10=1
        res= res*10 + (rem);					//  		 0*10+ 3                 3*10+ 2=32          32*10+ 1=321   
        temp= temp/10;							//         123/10=12               12/10= 1            1/10=0                                                                                                                                                                                                            
    }
    if(res==num)
    {
        printf("Given number is palindrome\n");
    }
    else
    {
        printf("Sorry! Not a palindrome number\n");
    }
    return 0;
}