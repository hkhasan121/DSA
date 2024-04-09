#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]= {10,20,30,40,50,60,70,80,90,100};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"Given List: ";
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int value ;

    cout<<"Enter the value you want to search: ";
    cin>>value;

    int l=0;
    int r =size -1;
    int found;

    while(l<=r)
    {
        int mid = (l+r)/2;
        if(value == arr[mid])
        {
            cout<<"Item "<<arr[mid]<<" is found at position "<<mid+1<<endl;;
            found =1;
            break;

        }
        else if(value <arr[mid])
        {
            r = mid -1;
        }
        else if(value > arr[mid])
        {
            l = mid + 1;
        }
    }

    if(found != 1)
    {
        cout<<"Item is not found"<<endl;
    }

}
