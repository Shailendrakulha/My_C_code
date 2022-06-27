#include<stdio.h>
int main()
{
    int i,count=0,n=0,times;
    printf("Enter number of times u wanna find odd natural number\n");
    scanf("%d",&times);
     printf("The odd natural number are\n ");
    for(;;)
    {
        if(n%2 != 0)
        {
            printf(" %d\n",n);
            count++;
        }
        if(count==times)
        {
            break;
        }
        n++;   
    }
    
    return 0;
}
