#include<stdio.h>
#include<conio.h>
int main()
{
    int rem ,n, reverse=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0);
    {
                   
               reverse=reverse*10+rem;
               rem=n%10;
               n/=10;
               printf("%d",d);     
               printf("%d",reverse);          
    }
  printf("Reverse Number:%d",reverse);
    
} 
