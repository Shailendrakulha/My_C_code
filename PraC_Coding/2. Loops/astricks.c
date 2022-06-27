#include<stdio.h>
int main()
{
    int i,j,n;
    /*
    this has to be printed
    *
    **
    ***
    ****
 */
    printf("enter no of asterisks line");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
           printf("*\n"); 
        }
        if(j>=i)
        {
            break;
        }

    }

    


    


    /*for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            printf("*\n");
        }
    }*/
    return 0;

}
