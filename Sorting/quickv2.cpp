#include<bits/stdc++.h>
#include<iostream>
#define pb push_back
#define c(n) cin>>n
#define f(i,n) for(int i=0;i<n;i++)
#define v vector<int>
#define s(n) sort(n.begin(),n.end())
#define r(n) reverse(n.begin(),n.end())
#define p(n) cout<<n<<endl
#define sg(n) sort(n.begin(),n.end(),greater<int>())
using namespace std;
v QuickSort(v &arr){
    if(arr.size()<=1){
        return arr;
    }
    // int pivot=arr.size()/2;
    int pivot=rand()%(arr.size());
    vector<int>left;
    vector<int>right;

    for(int i=0;i<arr.size();i++){
        if(i==pivot){
            continue;
        }
        if(arr[i]<=arr[pivot]){
            left.pb(arr[i]);
        }
        else{
            right.pb(arr[i]);
        }
    }
    v sorted_left=QuickSort(left);
    v sorted_right=QuickSort(right);
    v sorted;
    for(int i=0;i<sorted_left.size();i++){
        sorted.pb(sorted_left[i]);
    }
    sorted.pb(arr[pivot]);
    for(int i=0;i<sorted_right.size();i++){
        sorted.pb(sorted_right[i]);
    }
    return sorted;
}
int main(){
    int n;
    c(n);
    v arr(n);
    for(int i=0;i<n;i++){
        c(n);
    }
    v sorted=QuickSort(arr);
    for(int i=0;i<sorted.size();i++){
        cout<<sorted[i]<<" ";
    }
    return 0;
}