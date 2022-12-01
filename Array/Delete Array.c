#include <stdio.h>
int main(){
    int arr[7] = {11, 12, 13, 14, 15, 16, 17};
    int position;
    printf("Enter position: ");
    scanf("%d", &position);
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i = position - 1; i < length; i++){
        arr[i] = arr[i + 1];
    }
    arr[length - 1] = 0;
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
