#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void jora(int arr[], int start, int mid, int end){
    int leftSZ = mid - start + 1;
    int leftarr[leftSZ];
    for(int i=0; i<leftSZ; i++){
        leftarr[i] = arr[start + i];
    }
    
    int rightSZ = end - mid;
    int rightarr[rightSZ];
    for(int i=0; i<rightSZ; i++){
        rightarr[i] = arr[mid + 1 + i];
    }
    
    int i = 0, j = 0, k = start;
    while(i < leftSZ && j < rightSZ){
        if(leftarr[i] <= rightarr[j]){
            arr[k++] = leftarr[i++];
        } else {
            arr[k++] = rightarr[j++];
        }
    }
    
    while(i < leftSZ){
        arr[k++] = leftarr[i++];
    }
    while(j < rightSZ){
        arr[k++] = rightarr[j++];
    }
}


void vangon(int arr[], int start, int end){
    while(start < end){
        int mid = start + (end-start)/2;
        vangon(arr,start,mid);
        vangon(arr,mid+1,end);
        jora(arr,start,mid,end);
    }
}
int main()
{
    int n;
    cout << "Size of the array : ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vangon(arr, 0, n-1);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
