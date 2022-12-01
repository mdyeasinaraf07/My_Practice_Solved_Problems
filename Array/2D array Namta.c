#include <stdio.h>
int main(){
    int namta[10][10];
    int x = 1;
    int y = 1;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            namta[i][j] = x * y;
            printf("%d x %d = %d\n", x, y, namta[i][j]);
            y++;
        }
        printf("\n");
        x++;
        y = 1;
    }


    return 0;
}
