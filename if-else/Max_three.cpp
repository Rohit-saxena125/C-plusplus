#include<iostream.h>
using namespace std;
int main()
{
    int num1,num2,max,num3;

    cin>>num1>>num2>>num3;

    if (num1>num2)
    {
        if (num1 > num3)
        {
            printf("%d is max",num1);
        }
        else
        {
            printf("%d is max",num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("%d is max",num2);
        }
        else
        {
            printf("%d is max",num3);
        }
    }

    return 0 ;
}