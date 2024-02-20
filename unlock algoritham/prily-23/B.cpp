#include<iostream>
using namespace std;
int main(){
    int n,t;
    cin >> n >> t;
    vector<int> arr(n);
    bool flag = false;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == t){
            flag = true;
        }
    }
    if(flag){
        cout << "Senti Aunti Ramva will never be mine" <<endl;
    }
    else{
        cout << "Senti Aunti Ramva is mine" <<endl;
    }
    cout << "U0001F618" << endl;
    return 0;
}