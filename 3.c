#include <stdio.h>

int main() {
    int n, sum = 0;
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        if (n % 7 == 0) {
            sum += n;
        }
    }

    printf("%d\n", sum);

    return 0;
}
