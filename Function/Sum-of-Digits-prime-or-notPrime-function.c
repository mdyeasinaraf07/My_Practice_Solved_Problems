#include <stdio.h>
int sum_of_digits(int n);
int is_prime_sod(int n);

int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    sum_of_digits(n);
    is_prime_sod(sum_of_digits(n));

    if(is_prime_sod(sum_of_digits(n)) == 0){
        printf("This is not my number\n");
    }
    else{
        printf("Its my prime number\n");
    }

    return 0;
}



int sum_of_digits(int n){
    int sod = 0;
    while(n != 0){
        sod += n % 10;
        n /= 10;
    }
    return sod;
}
int is_prime_sod(int n){
    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
