#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int coins[n];
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }

    int need;
    cin >> need;

    int count = 0;

    for(int i = n-1; i >= 0; i--){
        if(need >= coins[i]){
            count += need / coins[i];
            need = need % coins[i];
        }
    }

    cout <<"Total coin -> "<< count << endl;
    return 0;

}