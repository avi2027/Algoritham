#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i=0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int ans = 0;
    for(int i=0; i<n-1;i++){
        ans += a[i+1] - a[i];
        i++;
    }

    cout << ans << endl;
    return 0;
}