#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int s,x;
    cin >> s >> x;

    int count = 0;
    while(s > 0){
        s /= x;
        count++;
    }

    cout << count << endl;
    return 0;
}