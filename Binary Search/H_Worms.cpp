#include<iostream>
using namespace std;
int main(){
    int n,q,i,j,mid,low,high,key;
    cin >> n;
    int given[n+5],newArr[n+5];
    for(int i=0; i< n;i++){
        cin >> given[i];
        if(i==0){
            newArr[0] == given[0];
        }
        else{
            newArr[i] = given[i] + newArr[i-1];
            
        }
        
    }
}