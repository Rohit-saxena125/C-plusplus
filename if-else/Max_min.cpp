#include<iostream.h>
using namespace std;
int main()
{
    int num1,num2,max,min;

    cin>>num1>>num2;

    if (num1>num2)
    {
        max = num1;
        min = num2;
    }
    else
    {
        max = num2;
        min = num1;
    }
    printf("max = %d \nmin = %d",max,min);

    return 0 ;
}