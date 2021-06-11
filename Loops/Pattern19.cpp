/*
*********
**** ****
***   ***
**     **
*       *
*       *
**     **
***   ***
**** ****
*********
*/
#include<iostream.h>
using namespace std;

int main()
{
    int n,j,i;

    cin>>n;

    for( i = 1 ; i <=n ; i++ )
    {
       for (j = 1 ; j <= n - i ; j++)
       {
           cout<< "*";
       }
       for (j = 1 ; j <= 2 * i - 1 ; j++)
       {
           if ( j == 1 || j == 2 * i -1 )
           {
               cout<<"*";
           }
           else
           {
               cout<<" ";
           }
       }
       for (j = 1 ; j <= n - i ; j++)
       {
           cout<< "*";
       }
        cout<<endl;
    }
    for( i = n ; i > 0 ; i-- )
    {
       for (j = 1 ; j <= n - i ; j++)
       {
           cout<< "*";
       }
       for (j = 1 ; j <= 2 * i - 1 ; j++)
       {
           if ( j == 1 || j == 2 * i -1 )
           {
               cout<<"*";
           }
           else
           {
               cout<<" ";
           }
       }
       for (j = 1 ; j <= n - i ; j++)
       {
           cout<< "*";
       }
        cout<<endl;
    }
    return 0 ;
}