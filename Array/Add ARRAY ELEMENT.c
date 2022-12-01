#include <stdio.h>
int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8,10};
    int position;
    printf("Enter position: ");
    scanf("%d", &position);
    int addNumber;
    printf("Enter your add-number: ");
    scanf("%d", &addNumber);
    int length = sizeof(arr) / sizeof(arr[0]);
    if(arr[length - 1] != 0){
        printf("Sorry not enough space\n");
    }
    else{
        for(int i = length - 1; i >= position - 1; i--){
            arr[i] = arr[i - 1];
        }
        arr[position - 1] = addNumber;
        for(int i = 0; i < length; i++){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
