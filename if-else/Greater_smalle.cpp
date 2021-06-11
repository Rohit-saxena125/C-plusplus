#include<iostream.h>
using namespace std;
int main()
{
    int num1,num2;

    cin>>num1>>num2;

    if (num1 > num2)
    {
        printf("%d is greater than %d",num1,num2);
    }
    else if (num1 == num2)
    {
        printf("%d is equal to %d",num1,num2);
    }
    else
    {
        printf("%d is smallerr than %d",num1,num2);
    }

    return 0 ;
}