#include<iostream.h>
using namespace std;
int main()
{
    int l, b, area, perimeter;
    cin>>l>>b;
    area = l * b;
    perimeter = 2 * (l + b);
    cout<<"The area is :"<<area<<"\n";
    cout<<"The Perimeter is :"<<perimeter;
    return 0;
}