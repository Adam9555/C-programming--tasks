#include <stdio.h>

int main() {
    int n, i, j;
    int pascal[21][21]; // Egy táblázat a számoknak (n=20-ig biztonságos)

    printf("n = ");
    scanf("%d", &n);

    // 1. A háromszög felépítése sorról sorra
    for (i = 0; i <= n; i++) {
        // Minden sor eleje és vége 1
        pascal[i][0] = 1;
        pascal[i][i] = 1;

        // A belső elemek kiszámítása (a felettük lévő kettő összege)
        for (j = 1; j < i; j++) {
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }

    // 2. Az n-edik sor kiíratása
    printf("(x+1)^%d egyutthatoi: ", n);
    for (j = 0; j <= n; j++) {
        printf("%d ", pascal[n][j]);
    }
    printf("\n");

    return 0;
}