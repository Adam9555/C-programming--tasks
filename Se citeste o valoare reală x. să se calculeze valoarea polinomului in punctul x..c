//Se citeste un sir de n+1 numere reale a0, a1, …, an reprezentând coeficienții unui polinom de
//gradul n . Se citeste o valoare reală x. să se calculeze valoarea polinomului in punctul x.  

#include <stdio.h>
#include <math.h> // A pow(alap, kitevo) függvény miatt kell

int main() {
    int n, i;
    float x, a, eredmeny = 0;

    // 1. Beolvassuk a fokszámot (n) és a behelyettesítendő értéket (x)
    printf("n = ");
    scanf("%d", &n);
    printf("x = ");
    scanf("%f", &x);

    // 2. Beolvassuk az n+1 darab együtthatót
    // A matematikai sorrend miatt i-t n-től indítjuk lefelé 0-ig
    for (i = n; i >= 0; i--) {
        printf("a%d = ", i);
        scanf("%f", &a);

        // 3. Kiszámoljuk a tagot: a * x^i és hozzáadjuk a többihez
        eredmeny = eredmeny + a * pow(x, i);
    }

    // 4. Végeredmény kiírása
    printf("A polinom erteke a(z) %.2f pontban: %.2f\n", x, eredmeny);

    return 0;
}