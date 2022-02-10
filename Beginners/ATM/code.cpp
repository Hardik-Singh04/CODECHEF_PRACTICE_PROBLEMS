#include<stdio.h>
int main()
{   
    int transaction;
    float amount,balance;
  	scanf("%d%f",&transaction,&amount);
  	balance=amount-transaction-0.5;
   	if(transaction+0.5>amount)
   	{
   		printf("%.2f",amount);		
   	}
   	else if(transaction%5!=0)
   	    printf("%.2f",amount);
   	else
  	    printf("%.2f",balance);    
  
    return 0 ;
}



