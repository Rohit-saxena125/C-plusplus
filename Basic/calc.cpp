#include <iostream.h>
using namespace std;
int main()
{
    int n1,n2;
    char option;

    cin>>n1>>n2;

    printf("+ , - , * , / ,%% \n") ;
    cin>>option;

    switch (option)
    {
    case '+':
        printf("%d %d \n",n1+n2);
        break;
    case '-' :
        printf("%d %d\n",n1-n2);
        break;
    case '*':
        printf("%d %d\n",n1*n2);
        break;
    case '/' :
        printf("%d %d\n",n1/n2);
        break;
    case '%' :
        printf("%d %d\n",n1%n2);
        break;
    default:
        printf("You enter wrong choice");
        break;
    }
    return 0;
}