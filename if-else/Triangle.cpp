#include<iostream.h>
using namespace std;
int main()
{
    int side1,side2,side3;

    cin>>side1>>side2>>side3;

    if (side1 == side2 && side2 == side3)
    {
        printf("This is an equilateral triangle");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3 )
    {
        printf("This is an isosceles triangle");
    }
    else
    {
        printf("This is an scalene triangle");
    }

    return 0 ;
}