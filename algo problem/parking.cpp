#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,sum;
    cin >> a;
    while(a--){
        int b, sum=0;
        cin >> b;
        int arr[b];

        for(int i=0; i<b; i++){
            cin >> arr[i];
        }
        sort(arr, arr+b);
        for(int i=0;i<b-1;i++){
            sum+=abs(arr[i]-arr[i+1]);
            
        }
        sum*=2;
        cout<<sum<<endl;
    }

    return 0;
}