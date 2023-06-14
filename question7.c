#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n >= 20 && n <= 50) {
        printf("O numero esta entre 20 e 50!");
    } else {
        printf("O numero nao esta entre 20 e 50!");
    }
}