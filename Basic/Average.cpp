#include <iostream.h>
using namespace std;
int main()
{
    int mark1,mark2,mark3,mark5,mark4,total;
    float avg;
    cin>>mark1>>mark2>>mark3>>mark4>>mark5;
    total = mark1+mark2+mark3+mark4+mark5;
    avg = total/5;
    cout<<avg;
    return 0;
}