#include <stdio.h>

float sumFoo(int n) {
    float a=1, b=0;
    for (int i=1; i<=n; i++) {
        a*=i;
        b+=a/(i*i);
    }
    return b;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%f\n", sumFoo(n));
}
