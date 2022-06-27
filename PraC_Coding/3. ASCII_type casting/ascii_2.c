#include<stdio.h>
int main()
{
    {
        int ch;
        printf("enter character\n");
        scanf("%c",&ch);
        if((ch>=65 && ch<=90) ||(ch>=97 && ch<=122))
        {
            printf("%c is Alphabet\n",ch);

        }
        else if((ch>=48 && ch<=57))
        {
            printf("%c is digit \n",ch);

        }
        else
        {
            printf("%c is special char\n",ch);
        }
        

    }
    return 0;
}