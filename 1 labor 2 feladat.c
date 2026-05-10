#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float ma, mg, mh;
    printf("a="); scanf("%d", &a);
    printf("b="); scanf("%d", &b);
    printf("c="); scanf("%d", &c);
    
    ma = (a + b + c)/3.0;
    mg = pow(a * b * c, 1.0/3);
    printf("ma=%2.f\nmg=%2.f\n", ma, mg);
    
    if(a*b*c==0){
        printf("Mh nu exista, Im la 0!");
    }else {
        mh= 3/(1.0/a+1.0/b+1.0/c);
        printf("mh=%.2f", mh);
    }
    
    return 0;
}