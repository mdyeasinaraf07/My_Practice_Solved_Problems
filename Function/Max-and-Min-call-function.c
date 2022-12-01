#include <stdio.h>
void find_max_min(int arr[], int n, int* max, int* min){
    *max = arr[0];
    *min = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > *max){
            *max = arr[i];
        }
        if(arr[i] < *min){
            *min = arr[i];
        }
    }
}

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int maxx, minn;
    find_max_min(arr, n, &maxx, &minn);

    printf("Max number = %d\nMin Number = %d\n", maxx, minn);

    return 0;
}
