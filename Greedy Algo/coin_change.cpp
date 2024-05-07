#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of coins : ";
    cin >> n;
    vector<int> coins(n);
    cout << "Enter the coins : ";
    for(int i=0; i < n; i++){
        cin >> coins[i];
    }
    sort(coins.begin(), coins.end());
    int need;
    cout << "Enter the amount needed : ";
    cin >> need;
    vector<int> ans;

    for(int i=n-1; i>=0; i--){
        while(need >= coins[i]){
            need -= coins[i];
            ans.push_back(coins[i]);
        }
    }

    cout << "The coins are : ";
    for(auto x:ans){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
