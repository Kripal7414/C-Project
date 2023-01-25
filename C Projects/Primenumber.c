#include<stdio.h>
#include<conio.h>

int main() 
{
     int n, i, c =0;
     printf("Enter any number n.\n");
     scanf("%d",&n);
     
     for (i=1; i<=n; i++) 
     {
         if (n%i==0)
         c++;
         }
     }
       if(c==1)
      
      {
              printf("n is a PRIME number.\n");
               else{
               printf("n is not a PRIME number.\n");
                    }
                    return 0;
                    
     
}
     
