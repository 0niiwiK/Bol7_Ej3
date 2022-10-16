#include <stdio.h>

int main() {
    int num,i,resul=0;
    printf("Introduzca el primer operando: ");
    scanf("%d",&num);
    printf("Introduzca el segundo operando: ");
    scanf("%d",&i);
    for (i; i > 0; i--) {
        resul+=num;
    }
    printf("%d",resul);
    return 0;
}
