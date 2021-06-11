#include <iostream.h>
using namespace std;
int main()
{
    int n;

    cin >> n;

    int  i;

    for ( i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Not prime");
            break ;
        }
    }
    if ( i == n)
    {
        printf("Prime");
    }

    return 0;
}