#include<bits/stdc++.h>
using namespace std;

int  check_palindrome(int n,int rev)
{
    if(n == 0)
    {
        return  rev;
    }
        int lastDigit = n % 10;
        rev = rev*10 + lastDigit;
        n = n/10;
        return check_palindrome(n,rev);
}

int main()
{
    int originalNum;
    int reversedNum = 0;
    cout<<"Enter your number: ";
    cin>>originalNum;

    int Rev = check_palindrome(originalNum,reversedNum);

    if( originalNum == Rev)
    {
        cout<<"Your number is palindrome"<<endl;
    }
    else {
        cout<<"Not palindrome"<<endl;
    }

}