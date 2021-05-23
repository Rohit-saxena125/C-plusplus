#include<iostream.h>
using namespace std;
int main()
{
    float celsius,Farhenite;
    cout<<"Enter the temperature in degree celsius:";
    cin>>celsius;
    Farhenite =(9/5)*celsius+32;
    cout<<"Temperature in degree farhenite:"<<Farhenite;
    cout<<"###############################################################";
    cout<<"Enter the temperature in degree Farhenite:";
    cin>>Farhenite;
    celsius =(5/9)*(Farhenite-32);
    cout<<"Temperature in degree celsius:"<<celsius;
    return 0;
}