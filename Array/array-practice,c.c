#include <stdio.h>
int main(){
    int numbers[] = {1,2,3,5,6,1,2,3,5,1,2,3,1,2};
    int i,j;
    for(i=1; i<=6; i++){
        int count = 0;
        for(j=0; j<17; j++){
            if(i==numbers[j]){
                count++;
            }
        }
        if(count>0){
            printf("%d = %d\n", i, count);
        }
    }

    return 0;
}







/*#include <stdio.h>
int main(){
    int numbers[] = {1,3,5,6,7,8,1,5,8,9,6,10,2,10,5,6,7,8,9,5,2,3,10,6,7,8,8,6,5};
    int i,j;
    for(i=1; i<=10; i++){
            int count = 0;
        for(j=0; j<31; j++){
            if(i==numbers[j]){
                count++;
            }
        }
    printf("%d %d\n", i, count);
    }


    return 0;
}*/
