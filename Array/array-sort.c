#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i = 0, j = i + 1; i < n; i++, j++){
        if(arr[i] <= arr[j]){
            count ++;
            if(count == n - 1){
                break;
            }
        }
        else{
            count--;
        }
    }
    if(count == n - 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
