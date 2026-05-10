#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, x, x1, x2, re, im, d;
    
    printf("a="); scanf("%f", &a);
    printf("b="); scanf("%f", &b);
    printf("c="); scanf("%f", &c);
    

    if(a==0) {
    if(!b==0){
        x=-c/b;
        printf("x=%.2f", x);
    }else if(c==0)
        printf("Orice x e solutia");
    else
        printf("Niciun x nu e solutie");
    }else {
        d= b*b - 4*a*c;
        if(d<0) {
            re = -b/(2*a);
            im = sqrt(-d)/(2*a);
            printf("x1=%.2+i*%.2f\n", re, im);
            printf("x2=%.2-i*%.2f\n", re, im);
        }else if(d==0){
            printf("x1=x2%.2f\n", -b/(2*a));
        }else {
            x1= (-b -sqrt(d))/(2*a);
            x2= (-b +sqrt(d)/(2*a));
            printf("x1=%.2f\n", x1);
            printf("x2=%.2f\n", x2);
        }
    }
    return 0;
}