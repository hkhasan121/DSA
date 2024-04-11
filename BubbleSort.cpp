#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,1,5,7,6,65,676,787,45,9,67,45,34};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Given Array: ";
    for(int i= 0;i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int flag;
    int count=0;

    for(int i = 1; i<size; i++)
    {
        flag = 0;
        for(int j =0; j<size-i; j++)
        {
            count++;
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
          
        }
         if(flag == 0)
           {
               break;
            }
    }
    
    cout<<"After sorting Array: ";
    for(int i= 0;i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}