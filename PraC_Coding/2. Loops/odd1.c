/*#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the value of n");
	scanf("%d",&n);
	
}*/
#include <stdio.h>

int main()
{
    int i, n;
    
    /* Input upper limit from user */
    printf("Print odd numbers till: ");
    scanf("%d", &n);

    printf("All odd numbers from 1 to %d are: \n", n);

    /*
     * Start a loop from 1, increment it by 2.
     * For each repetition prints the number.
     */
    for(i=1; i<=n; i+=2)
    {
        printf("%d\n", i);
    }

    return 0;
}
