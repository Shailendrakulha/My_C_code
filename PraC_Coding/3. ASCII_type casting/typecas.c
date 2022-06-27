#include<stdio.h>// Wap To know if a char is a vovel or not
int main()
{
    int n;
    char p;
    printf("Enter to know if it is a vovel or not\n");
    scanf("%c",&p);

    
    if( ((p=='a')||(p=='A')) || ((p=='e')||(p=='E')) || ((p=='i')||(p=='I'))  || ((p=='o')||(p=='O'))  ||   ((p=='u')||(p=='U')) )
    {
        printf("%c is a vovel",p);
    }
    else
    {
        printf("%c is consonant",p);
    }
 return 0;

}
