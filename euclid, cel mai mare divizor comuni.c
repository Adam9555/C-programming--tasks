#include <stdio.h>
#include <math.h>
int main()
{

    int a, b, d, i, r;
    printf("a="); scanf("%d", &a); 
    printf("b="); scanf("%d", &b);
    d= a;
    i= b;
    while(i!=0) {
        r= fabs(d-i);
        d=i;
        i=r;
    }

    printf("cmmdc(%d,%d)=%d", a,b,d);
    return 0;
}