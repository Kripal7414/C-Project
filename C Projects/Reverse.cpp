#include<stdio.h>
#include<conio.h>
int main()
{
    int rem,d ,n, reverse=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
               rem=n%10;
                n/=10;   
              
               reverse=reverse*10+rem; 
               
               
             printf("%d",d);     
               printf("%d",reverse);          
    }
  printf("Reverse Number:%d",reverse);
  return 0;
   
} 
