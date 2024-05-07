#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int lis[n];
    for(int i = 0; i < n; i++){
        lis[i] = 1;
    }
    int mx = 1;
    for(int i=1; i<n-1;i++){
        for(int j=0; j<i;j++){
            if(arr[i] > arr[j]){
                int value = 1 + lis[j];
                if (value > lis[i]){
                    lis[i] = value;
                }
            }
        }
        if(lis[i] > mx){
            mx = lis[i];
        }
    }
    cout << mx << endl;
    return 0;
}