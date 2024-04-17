#include<bits/stdc++.h>
using namespace std;

int sumOfNatualNum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n + sumOfNatualNum(n-1);
}

int DigitSquare(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (n*n)+DigitSquare(n-1);

}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int ans = sumOfNatualNum(n);
    cout<<"Sum of natural number: "<<ans<<endl;

    int result = DigitSquare(n);
    cout<<"Square of every natural number: "<<result<<endl;

    return 0;
}