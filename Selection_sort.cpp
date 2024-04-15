#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        int min = i;
        for(int j = i+1; j<n; j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }

            if(min != i)
            {
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
    }

    cout<<"Sorted array: ";

    for(int i = 0; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main()
{
    int arr[]={24,56,3,5,87,45,32,12,1,11,4,};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Given Array: ";
    for(int i = 0; i<size;i++)
    {
        cout<<arr[i]<<" ,";
    }

    cout<<endl<<endl;

    selection_sort(arr,size);
}
