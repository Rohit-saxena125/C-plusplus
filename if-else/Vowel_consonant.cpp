#include<iostream.h>
using namespace std;
int main()
{
    char c;

    int isLowercase,isuppercase;

    cin>>c;

    isLowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isuppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (isLowercase || isuppercase)
    {
        printf("character is vowel");
    }
    else
    {
        printf("character is consonant");
    }

    return 0 ;
}