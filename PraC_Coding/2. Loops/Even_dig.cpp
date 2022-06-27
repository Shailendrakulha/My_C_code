#include<stdio.h>
int main()
{
    int temp=0,num,rem,count=0;
    printf("Enter a number to know no of even digits in it");
    scanf("%d",&num);

    temp=num;
    
    while(temp!=0)		//		523!=0						52!=0				5!=0	0==0 loop termnt
    
 	{
      rem = temp%10;	//		523/10 = 3 					52%10=2				5%10 =5
      if (rem%2 == 0)	//      3%2 =>1 == 0 false			2%2 =>0 == 0 true		5%2=>1 == 0 false
      {
        count++; 		//   	count=0						count =1                 count remain same		
      }
      temp=temp/10;		 // 		523/10= 52.3>52			52/10=5.2> 5		5/10=0
    
	}
	  
	  
    printf("%d is no of EVEN digits in %d ",count,num);
    return 0;
    
}
