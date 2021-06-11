#include<iostream.h>
using namespace std;
int main()
{
    int n;

    cin>>n;

    for (int i =1 ; i <= 10 ; i++)
    {
        printf("%d * %d = %d",n,i,n*i);
        printf("\n"); 
    }
    

    return 0 ;
}