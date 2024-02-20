#include<stdio.h>
int main()
{
    int key,n,i,flag = 0;

    scanf("%d", &n);
    int arr[n+2];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);

    for(i=0; i<n; i++){
        if(key == arr[i]){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("Not found\n");
    }
    else{
        printf("Found\n");
    }

    return 0;
}