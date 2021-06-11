#include<iostream.h>
using namespace std;
int main()
{
    int n;

    cin>>n;

    int sum = 0 ;

    while (n>=0)
    {
        sum += n;
        cin>>n;
    }
    printf("%d",sum);

    return 0 ;
}