#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float x,y;
    printf("Enter value of A,B,C");
    scanf("%f %f %f",&a,&b,&c);

    x= ((-b) + sqrt(b*b-4*a*c))/(2*a);


    y= ((-b) - sqrt(b*b-4*a*c))/(2*a);

    printf("The roots of quad equation are %f \n %f\n ",x ,y);

    if((b*b-4*a*c)>0)
    {
        printf("Roots are reals\n");

    }
    else if((b*b-4*a*c)==0)
    {
        printf("roots are equal\n");
    }
    else
    {
        printf("Roots are Imaginery\n");
    }

    return 0;
}
