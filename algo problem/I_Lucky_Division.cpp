#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int flag = 0;
    int arr[13] = {4,7,47,74,77,44,444,447,474,477,777,774,744};
    for(int i=0; i<13; i++){
        if(N % arr[i] == 0){
            flag = 1;
        }       
    }
    if(flag == 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}