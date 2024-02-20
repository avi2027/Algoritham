#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    for(int i=1; i<=T; i++){
        int N;
        cin >> N;
        int arr[N+2];

        for(int j=0; j<N; j++){
            cin >> arr[j];
        }

        int max = -1;
        for(int j=0; j<N; j++){
            if(arr[j] > max){
                max = arr[j];
            }
            
        }
        cout << "Case " << i << ": " << max << endl;
    }

    return 0;
}
