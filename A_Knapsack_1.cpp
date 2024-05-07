#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n, w;
    cin >> n >> w;
    int weight[n], value[n];
    for(int i = 0; i < n; i++){
        cin >> weight[i] >> value[i];
    }
    int dp[n+1][w+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= w; j++){
            dp[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= w; j++){
            if(weight[i-1] <= j){
                dp[i][j] = max(dp[i-1][j], value[i-1] + dp[i-1][j-weight[i-1]]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[n][w] << endl;
    return 0;
}