#include<iostream>
using namespace std;
#define ll long long int
int main(){
    ll n,ans,count=0,k=0;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
        if(2*a[k]<=a[i+1]){
            count++;
            k++;
        }
    }
    ans=n-min(n/2,count);
    cout<<ans<<endl;
}