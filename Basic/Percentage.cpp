#include<iostream.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int sub1,sub2,sub3;
    float marks,percentage;
    cout<<"Enter the marks of three subject \n ";
    cin>>sub1>>sub2>>sub3;
    marks = sub1 + sub2 + sub3;
    percentage = (marks/300)*100;
    cout<<"\n"<<"The percentage marks are :"<<percentage<<"%"<<"\nTotal marks are :"<<marks;
    return 0 ;
}