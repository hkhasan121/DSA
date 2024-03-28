#include<bits/stdc++.h>
using namespace std;

void is_palindrome(string text)
{
    int check=0;
    for(int i = 0;i<text.length()/2;i++)
    {
        if(text[i]!=text[text.length()-i-1])
        {
            check =-1;
            break;
        }
    }
    if(check== -1)
    {
        cout<<"Not Palindrome"<<endl;
    }
    else
    {
        cout<<"Palindrome"<<endl;
    }
}

int main()
{
    is_palindrome("radar");
    is_palindrome("hasan");
    is_palindrome("madam");
}
