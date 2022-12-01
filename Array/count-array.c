#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int numbers[n];
    for(int i=0; i<n; i++){
        scanf("%d", &numbers[i]);
    }

    int length = sizeof(numbers)/sizeof(numbers[0]);

    int max = numbers[0];
    for(int i=0; i<length; i++){
        if(max<numbers[i]){
            max = numbers[i];
        }
    }

    int arrayCount[max+1];
    for(int i=0; i<=max; i++){
        arrayCount[i] = 0;
    }

    for(int i=0; i<length; i++){
        arrayCount[numbers[i]]++;
    }
    for(int i=0; i<=max; i++){
        printf("%d = %d\n", i, arrayCount[i]);
    }

    return 0;
}
























//#include <stdio.h>
//int main(){
//    int numbers[] = {1,3,2,4,7};
//    int max = numbers[0];
//    for(int i=0; i<5; i++){
//        if(max<numbers[i]){
//            max = numbers[i];
//        }
//    }
//
//    int arrayCount[max+1];
//    for(int i=0; i<=max; i++){
//        arrayCount[i] = 0;
//    }
//
//
//    for(int i=0; i<5; i++){
//        arrayCount[numbers[i]]++;
//    }
//    for(int i=0; i<=max; i++){
//        printf("%d = %d\n", i, arrayCount[i]);
//    }
//
//
//
//    return 0;
//}

//
//#include <stdio.h>
//int main(){
//    int numbers[] = {1,2,5,3,6,7,8,9,3,2,6,9,7,4,2,8,4,9};
//    int max = 10;
//    int arrayCount[max];
//    for(int i=0; i<max; i++){
//        arrayCount[i]=0;
//    }
//
//    int i;
//    for(i = 0; i<18; i++){
//        arrayCount[numbers[i]]++;
//
//    }
//
//    for(int i=0; i<max; i++){
//        if(arrayCount[i]>0)
//
//        printf("%d %d\n", i, arrayCount[i]);
//    }
//
//
//    return 0;
//}
