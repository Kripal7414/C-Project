#include<stdio.h>
#include<conio.h>
#define PI 3.14
 main()
{
     float r,a;
     printf("______CIRCLE______\n");
     printf("enter the value of radius");
     scanf("%f",&r);
     a=PI*r*r;
     printf("area of the circle is %f\n",a);
     int I,b,v;
     printf("______RECTANGLE_____\n",a);
     printf("length=");
     scanf("%d",&I);
     printf("breadth=");
     scanf("%d",&b);
     v=I*b;
     printf("area of the rectangle is %d\n",v);
     float h,t,o;
     printf("_____TRAIANGLE______\n");
     printf("base=");
     scanf("%f",&h);
     o=0.5*h*t;
     printf("area of the triangle is %f",o);
     
     getch();
}
     
