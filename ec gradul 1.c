#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, x;
    
    printf("a="); scanf("%f", &a);
    printf("b="); scanf("%f", &b);

    

    
    if(!a==0){
        x=-b/a;
        printf("x=%.2f", x);
    }else if(b==0)
        printf("Orice x e solutia");
    else
        printf("Niciun x nu e solutie");
    
    return 0;
}