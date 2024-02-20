#include<iostream>
using namespace std;
bool isSearch(int *arr, int n, int key){
    // base case
    if(n == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }
    else{
        bool remainPart = isSearch(arr+1,  n-1, key);
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
    int key;
    cout << "Enter  search element : ";
    cin >> key;

    bool ans = isSearch(arr, n, key);
    if(ans){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    return 0;
}