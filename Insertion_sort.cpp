#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[],int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Insertion_sort(int arr[], int n)
{
    for(int i = 1; i<n; i++)
    {
        int temp = arr[i];
        int j = i - 1;  //0th index of array
        while(j>= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
int main()
{
    int arr[] = {9,6,4,8,99,34,54};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Given Array: ";
    print_array(arr,size);
    Insertion_sort(arr,size);
    cout<<"Sorted Array: ";
    print_array(arr,size);
}
