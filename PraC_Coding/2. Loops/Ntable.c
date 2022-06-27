#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,count,t=1;
    printf("Enter number upto which u wanna see table\n");
    scanf("%d",&count);


for(j=1;j<=count;j++)
{
    for(i=1;i<=10;i++)
    {
        printf("%2d x %2d = %2d     ",t,i,t*i);
        
    }
    if(t==count)
    {
        break;
    }
    t++;
    
    printf("\n");
    

}

return 0;
getch ();
}
    
