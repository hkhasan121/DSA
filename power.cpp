#include<bits/stdc++.h>
using namespace std;

int power(int n)
{
    //base case
    if(n == 0)
    {
        return 1;
    }
    //Recursive call
    return 2*power(n-1);
}

int main()
{
    int n;
    cout<<"Enter the power of 2: ";
    cin>>n;
    int ans = power(n);
    cout<<"2 to the power "<<n<<": "<<ans<<endl;
}
