#include<stdio.h>
int main(){
    int T;
    scanf("%d", &T);

    for(int i=1; i<T; i++){
        int N;
        scanf("%d", &N);
        int arr[N+2];
        for(int j=0; j<N; j++){
            scanf("%d", &arr[j]);
        }
    }

    int max = -1,N, arr[N+2];
    for(int j=0; j<N; j++){
        if(arr[j] > max){
            max = arr[j];
        }
        printf("case-1: %d", max);
    }
        
    return 0;
}