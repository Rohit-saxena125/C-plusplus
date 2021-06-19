#include<iostream.h>
using namespace std;

int main()
{
    int a;
    float b;
    cin>>a>>b;
    if (a%5 == 0)
    {
        if ( a> b)
        {
            printf("%.2f",b);
        }
        else
        {
            float x = b - a - 0.50 ;
            printf("%.2f",x);
        }
    }
    else if (a%5 != 0)
    {
        printf("%.2f",b);
    }
    else if ( a > b)
    {
        printf("%.2f",b);
    }
    return 0;
}