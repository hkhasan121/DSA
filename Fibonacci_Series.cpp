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
    else 
    return fibo(n-1) + fibo(n-2);
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Fibonacci Series: ";
    for(int i = 0; i<=n; i++)
    {
        int fibonacci = fibo(i);
        cout<<fibonacci<<" ";

    }
}