#include<stdio.h>
#include<stdlib.h>

typedef struct{
      char name[30];
      int id;
      double salary;
} Employee;

int main()
{
    int n=2;
    Employee employees[n];
    printf("Enter %d Employee details \n\n");
    for(int i=0; i<n; i++) {
            printf("Employee %d:-\n",i+1);
            
            printf("Name:");
            scanf("%[^\n]s",employees[i].name);
            
            printf("Salary:");
            scanf("%lf",&employees[i].salary);
            
            char ch=getchar();
            printf("\n");
            
}
      printf("--------ALL Employees Details--------\n");
      for(int i=0; i<n; i++) {
              printf("Name\t:");
              printf("s\n",employees[i].name);
              
              printf("Id\t:");
              printf("Salary\t:");
              
              printf("\n");
              
              }
              
              return 0;
              
}
