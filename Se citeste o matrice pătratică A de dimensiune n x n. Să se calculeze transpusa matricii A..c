#include <stdio.h>

int main() {
    int n, i, j;
    int A[10][10], B[10][10]; // B lesz a transzponált mátrix

    printf("n = ");
    scanf("%d", &n);

    // 1. A mátrix beolvasása
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // 2. A transzponálás lényege: felcseréljük az indexeket
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            B[j][i] = A[i][j]; // Ami sor volt, oszlop lesz
        }
    }

    // 3. Az eredmény (B mátrix) kiírása
    printf("\nA transzponalt matrica:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n"); // Sor végén új sorba lépünk
    }

    return 0;
}