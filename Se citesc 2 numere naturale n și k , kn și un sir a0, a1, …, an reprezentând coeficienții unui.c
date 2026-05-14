#include <stdio.h>
#include <math.h>

int main() {
    int n, k, i, j;
    double a[100], x, valPol = 0, valDeriv = 0, p, coef;

    // 1. Adatok beolvasása
    printf("n (fokszam) = "); scanf("%d", &n);
    printf("k (derivalasi rend) = "); scanf("%d", &k);
    printf("x (ertek) = "); scanf("%lf", &x);

    printf("Adja meg az egyutthatoat (a0-tol an-ig):\n");
    for (i = 0; i <= n; i++) {
        printf("a%d = ", i);
        scanf("%lf", &a[i]);
    }

    // 2. Eredeti polinom értéke x-ben
    for (i = 0; i <= n; i++) {
        valPol += a[i] * pow(x, i);
    }

    // 3. k-adik derivált kiszámítása és értéke x-ben
    printf("\nA(z) %d. rendu derivalt egyutthatoi: ", k);
    
    // Csak azok a tagok maradnak meg, ahol a fokszam legalább k
    for (i = k; i <= n; i++) {
        coef = a[i];
        
        // A k-adik derivált együtthatójának kiszámítása: 
        // i * (i-1) * ... * (i-k+1) * a[i]
        for (j = 0; j < k; j++) {
            coef *= (i - j);
        }
        
        printf("%.2f ", coef);
        
        // A derivált értékének növelése: együttható * x^(i-k)
        valDeriv += coef * pow(x, i - k);
    }

    // 4. Eredmények kiírása
    printf("\n\nPolinom erteke x-ben: %.2f", valPol);
    printf("\nDerivalt erteke x-ben: %.2f\n", valDeriv);

    return 0;
}