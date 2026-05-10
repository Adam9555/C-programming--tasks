#include <stdio.h>
int main() {
    int n;
    do {
        printf("Adj meg egy pozitiv szamot: ");
        scanf("%d", &n);
    } while (n <= 0);
    printf("A szam: %d\n", n);
    return 0;
}