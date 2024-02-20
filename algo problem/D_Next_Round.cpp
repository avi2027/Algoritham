#include<iostream>
using namespace std;
int main(){
    int n=0,k=0;
    cin >> n >> k;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int val_position = arr[k-1]; 
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] >= val_position && arr[i] != 0){
            count++;
        }
        else{
            continue;
        }
    }

    cout << count << endl;

    return 0;
}