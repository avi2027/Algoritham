#include<iostream>
using namespace std;
int getSum(int *arr, int n){
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return arr[0];
    }
    int remainPart = getSum(arr + 1,  n - 1);
    return arr[0] + remainPart;
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

    int sum = getSum(arr, n);

    cout << "Array sum is -> " << sum << endl;
    

    return 0;
}