#include<iostream>
#include<conio.h>
using namespace std; 

int Peak(int arr[], int low, int high, int n){
   
    int mid = low + (high - low)/2;  
    
    if ((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid]))
        return mid;

    else if (mid > 0 && arr[mid-1] > arr[mid])
        return Peak(arr, low, (mid -1), n);

    else
        return Peak(arr, (mid + 1), high, n);
}
int findPeak(int arr[], int n)
{
    return Peak(arr, 0, n-1, n);
}

int main()
{
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"index of peack element: "<<findPeak(arr, n);
    return 0;
}