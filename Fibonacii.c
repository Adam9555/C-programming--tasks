#include <stdio.h>
#include <math.h>
int main()
{

    int n, a, b, c, i;
    printf("n="); scanf("%d", &n); 
    
    a = 0;
    b = 1;
    printf("F(0)=%d\n", a,b);
    for(i=2; i<=n; i++){
        c= a+b;
        printf("F(%d)=%d\n", i, c);
        a=b;
        b=c;
        
    }

}