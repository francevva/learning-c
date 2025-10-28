#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    printf("Введите число: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Сумма чисел: ", n, sum);
    return 0;
}
