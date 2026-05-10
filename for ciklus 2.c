#include <stdio.h>
int main() {
    int n, i, osszeadas = 0;
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        osszeadas= osszeadas+i;
    }
    printf("Osszeadas: %d\n", osszeadas);    
    return 0;
}