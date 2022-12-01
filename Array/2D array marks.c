#include <stdio.h>
int main(){
    int marks[4][10] = {
        {
            80, 70, 92, 78, 58, 83, 85, 66, 99, 81
        },
        {
            75, 67, 55, 100, 91, 84, 79, 61, 90, 97
        },
        {
            98, 67, 75, 89, 81, 83, 80, 90, 88, 77
        },
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        },

    };
//    for(int i = 0; i < 10; i++){
//        marks[3][i] = marks[0][i] / 4 + marks[1][i] / 4 + marks[2][i] / 4;
//        printf("Roll no = %d  Total marks = %d\n", i + 1, marks[3][i]);
//    }
    printf("%d\n", marks[1][2]);


    return 0;
}
