#include<iostream>
using namespace std;

void print(int *arr, int s, int e){
    for(int i = s; i <= e; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool isSearch(int *arr, int s, int e, int key){
    print(arr, s, e);

    // base case
    if(s > e){
        return false;
    }

    int mid = s + (e - s) / 2;

    if(arr[mid] == key){
        return true;
    }

    if(arr[mid] < key){
        return isSearch(arr, mid + 1, e, key);
    }
    else {
        return isSearch(arr, s, mid - 1, key);
    }
}

int main(){

    int n;
    cout << "Enter array size : ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int key;
    cout << "Enter search element : ";
    cin >> key;

    // Initialize s and e appropriately
    int s = 0;
    int e = n - 1;

    bool ans = isSearch(arr, s, e, key);
    if(ans){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    return 0;
}
