#include<stdio.h>
int main()

{
    //int n;
    char p;
    printf("Enter to know if it is a vovel or not\n");
    scanf("%c",&p);

    
    if( ((p==97)||(p==65)) && ((p==101)||(p==69)) && ((p==108)||(p==73))  && ((p==111)||(p==79))  &&   ((p==117)||(p==85)) )
    {
        printf("%c is a vovel",p);
    }
    else
    {
        printf("%c is consonant",p);
    }
 return 0;

}

