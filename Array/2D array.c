#include <stdio.h>
int main(){
    int x[2][2];
    for(int i = 0; i < 2; i ++){
        for(int j = 0; j < 4; j++){
            printf("x[%d][%d] = ", i, j);
            scanf("%d", &x[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            printf("%d", x[i][j]);
        }
        printf("\n");
    }

    return 0;
}
