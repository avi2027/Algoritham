#include<iostream>
using namespace std;
int main(){
   
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int arr[n+5];
    cout << "Enter array element : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int key;
    cout << "Enter the searcing element : ";
    cin >> key;
    int start=0,end = n-1;

    int mid = (start + end) / 2;
    int flag = 0;
    while(start <= end){
        if(arr[mid] == key){
            flag = 1;
            break;
        }

        else if(key > arr[mid]){
            start = mid+1;
        }
        if(key < arr[mid]){
            end = mid-1;
        }
        mid = (start + end) / 2;

    }

    if(flag){
        cout << "Element Found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }

    return 0;
}