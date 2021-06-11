#include<iostream.h>
using namespace std;
int main()
{
    int num;

    cin>>num;

    if (num % 2 == 0)
    {
        printf("%d is even",num);
    }
    else
    {
        printf("%d is odd",num);
    }
}