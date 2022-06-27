#include<stdio.h>
int main()
{
    int temp=0,num,rem,count=0,sum=0;
    printf("Enter a number to know Sum of 'no of its odd digits'in it");
    scanf("%d",&num);

    temp=num;
    
    while(temp!=0)		//		523!=0						52!=0				5!=0	0==0 loop termnt
    
 	{
      rem = temp%10;	//		523/10 = 3 					52%10=2				5%10 =5
      if (rem%2 != 0)	//      3%2 =1 != 0 true			2%2 != 0 false		5%2 != 0 true
      {
        count++; 		//   	count=1						count remian same   count=2	
        sum=sum+rem;    //      0+3                         3+0                 3+5
      }
      temp=temp/10;		 // 		523/10= 52.3>52			52/10=5.2> 5		5/10=0
    
	}
	  
	  
    printf("%d is no of odd digits in %d and their Sum is %d ",count,num,sum);
    return 0;
    
}
