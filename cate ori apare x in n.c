#include <stdio.h>
#include <math.h>
int main()
{

    int n, n_i, x, c, nr_ap= 0;
    printf("n="); scanf("%d", &n); n_i=n;
    printf("x="); scanf("%d", &x); 
    do{
        c = n % 10;
        if(c==x) nr_ap++;
        n = n / 10;
    }while(n!=0);
        
    printf("nr de aparitii ale cifrei %d in %d e %d", x, n_i, nr_ap);
    return 0;
}