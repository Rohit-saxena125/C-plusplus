/*
        1 
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5 
*/
#include<iostream.h>
using namespace std;

int main()
{
    int n,j,i;

    cin>>n;

    for( i = 1 ; i <=n ; i++ )
    {
        for( j = 1 ; j <= (n - i) ; j++) //Palindromic Pattern
        {
            cout<<"  ";
        }
        int k = i ;
        for ( ;j <= n ;j++)
        {
            cout<<k--<<" ";
        }
        k = 2;
        for(; j <= (n + i)-1 ; j++) //Palindromic Pattern
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}