#include <stdio.h>
int main(){
    int n = 10;
    int key;
    printf("Enter key: ");
    scanf("%d", &key);
    int arr[] = {1, 2, 3, 4, 5};
//    for(int i = 0; i < n; i++){
//        for(int j = i + 1; j < n; j++){
//            if(arr[j] < arr[i]){
//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
    int length = sizeof(arr) / sizeof(arr[0]);
    int highIndex = length - 1;
    int lowIndex = 0;
    int med;
    while(1){
        med = (highIndex + lowIndex) / 2;
        if(key == arr[med]){
            printf("Key number: %d is found on arr-index: %d\n", key, med);
            break;
        }
        if(key < arr[med]){
            highIndex = med - 1;
        }
        else{
            lowIndex = med + 1;
        }
    }


    return 0;
}
