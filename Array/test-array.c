#include <stdio.h>
int main(){
    int numbers[] = {1,2,3,5,1,2,3,1,2,3,1,2,1};
    int countArray[6] = {0};
    for(int i=0; i<13; i++){
       countArray[numbers[i]]++;
    }
    for(int i=0; i<6; i++){
            if(countArray[i]>0){
               printf("%d = %d\n", i, countArray[i]);
            }
    }

    return 0;
}

