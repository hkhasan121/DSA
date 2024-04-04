#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
    int arr[]={10,20,30,40,50,45,5,6,67,78,34,667,345,677,35444,677,0000,676,45656,6778,565};
    int size=sizeof(arr)/sizeof(arr[0]);
    int value;
    int pos = -1;
    cout<<"Enter the value you want to search: ";
    cin>>value;
    for(int i = 0;i<size;i++)
    {
        if(value == arr[i])
        {
            pos = i+1;
            break;
        }
    }
    if(pos==-1)
    {
        cout<<"Item is not found"<<endl;
    }
    else
    {
        cout<<"Item "<<value<<" is found at position "<<pos<<endl;
    }

    getch();
}
