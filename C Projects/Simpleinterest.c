#include<stdio.h>
#include<stdio.h>
#include<math.h>

int simple_interest(); 
int compound_interest();
int main()
{
    simple_interest();
    compound_interest();
return 0;
}
 int simple_interest()
{
    float p,t,r,s_i;
    printf("\n enter the amount which you want to enter");
    scanf("%f",&p);
    printf("\n enter the rate which you want to enter");
    scanf("%f",&r);
    printf("\n time the amount which you want to enter");
    scanf("%f",&t);
    float s_i=(p*t)*r;
    printf ("\n the simple interest is %f",s_i);
    return 0;
}

int compound_interest()
{
    float p,t,r,s_i;
    printf("\n enter the amount which you want to enter");
    scanf("%f",&p);
    printf("\n enter the rate which you want to enter");
    scanf("%f",&r);
    printf("\n time the amount which you want to enter");
    scanf("%f",&t);
    float c,h,y;
    c=1+r;
    h=(pow(c,t));
    y=c*h;
    float c_i=y-p;
    printf ("\n the amount interest id %f",c_i);
    return 0;

}
    
    
    
    
    
    
