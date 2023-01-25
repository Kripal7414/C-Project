#include<stdio.h>
using namespace std;
int revrsnum(int num1,int num2)
{
    if (num1==0){
    return num2;
}

    num2*=10;
    num2+=(num1%10);
    num1=num1/10;
    return revrsnum(num1,num2);
}
int main()
{
    int num=121;
    
    int num2=revsnum(num,0);
    
    if 
    (num==num2){
    cout<<num<<"is palindrome!";
}
    
    else{
    cout<<num<<"is not a palindorome!";
}

    return 0;
    
}
