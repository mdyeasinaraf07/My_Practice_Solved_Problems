#include <stdio.h>
int main(){
    int arr[] = {5, 9, 3, 7, 5, 6};
    int *x = &arr[0];
    for(int i = 0; i < 6; i++){
        printf("%d\n", *x);
        *x++;
    }

    return 0;
}
