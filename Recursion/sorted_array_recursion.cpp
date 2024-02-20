#include<iostream>
using namespace std;
bool isSorted(int *arr, int n){
    if(n == 0 || n == 1){
        return  true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remainPart = isSorted(arr+1,  n-1);
        return remainPart;
    }
}

int main(){

    int n;
    cout << "Enter array size : ";
    cin >> n;
    int arr[n];
    cout << "Enter array element : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = isSorted(arr, n);
    if(ans){
        cout << "Array are sorted" << endl;
    }
    else{
        cout << "Array are not sorted" << endl;
    }

    return 0;
}