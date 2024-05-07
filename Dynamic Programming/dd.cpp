#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[8] = {3,4,-1,0,6,2,3};
    int lis[8];
    for(int i = 0; i < 8; i++){
        lis[i] = 1;
    }
    int mx = 0;
    for(int i=1; i<7;i++){
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
}