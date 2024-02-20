

#include<iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    int x[500], y[500];
    for(int i = 0; i < T; i++){
        cin >> x[i] >> y[i];
    }
    int count = 0;
    for(int i = 0; i<T; i++){
        for(int j=0; j<T; j++){
            if(x[i] == y[j]){
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}




