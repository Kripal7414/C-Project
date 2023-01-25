#include<stdio.h>
#include<conio.h>
main()
{
           int a;
           int b;
           int c;
           int temp;
           
           printf("Enter a:");
           scanf("%d",&a);
           printf("Enter b:");
           scanf("%d",&b);
           printf("Enter Your choice");
           scanf("%d",&c);
           
           switch(c)
           {
                    case 1:
                    {
                         temp=a+b;
                         printf("%d",temp);
                         break;
                         }
                    case 2:
                    {
                          temp=a-b;
                         printf("%d",temp);
                         break;
                         }
                     case 3:
                     { 
                          temp=a*b;
                         printf("%d",temp);
                          break;
                         }
                     case 4:
                     {
                          temp=a/b;
                          printf("%d",temp);
                          break;
                          }
                    default :
                    {
                             printf("Please Select no:");
                             break;
                             }
           }
           getch();
}                  

                            
                       
           
           
