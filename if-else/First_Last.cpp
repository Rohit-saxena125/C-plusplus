# include<iostream.h>
using namespace std;
int sum(int num)
{
    int lastDigit = num % 10;
    int firstDigit = num;
    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;
    int sum1 = firstDigit + lastDigit;
    return sum1 ;
}
int main()
{
    int t;
    cin>>t;

    for (int i = 1; i <= t ;i++)
    {
        int n;
        cin>>n;
        cout<<sum(n)<<endl;
    }
}