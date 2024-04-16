#include<bits/stdc++.h>
using namespace std;

void count(int n)
{
    //base case
    if(n == 0)
    {
        return ;
    }

     count(n-1);

    cout<<n<<" ";
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    count(n);
}