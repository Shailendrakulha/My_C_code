#include<stdio.h>
int main()
{
    int i=1,j,count,t=1;
    printf("Enter number upto which u wanna see table\n");
    scanf("%d",&count);


for(j=1;j<=10;j++)
{
    for(t=1;t<=count;t++)
    {
        printf(" %2d x %2d = %2d ",t,i,t*i);
        
    }
    i++;
    if(t==count)
    {
        break;
    }
    
    
    printf("\n ");
    

}
return 0;

}
    