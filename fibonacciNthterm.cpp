#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }

    return fibo(n-1) + fibo(n-2);
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int ans = fibo(n);
    cout<<n<<"th term of fibonacci number is: "<<ans<<endl;
}