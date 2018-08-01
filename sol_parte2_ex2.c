#include <stdio.h>
int progres(int a, int b); /* prototipo de funcion */

int main() {
    int x, y;
    int max;
    printf("Introduzca X y n, respectivamente: ");
    scanf("%d %d", &x, &y);
    max = progres(x, y); /* llamada a la funcion */
    printf("El resultado de la progresion es= %d \n",max);
    return 0;
}

int progres(int a, int b) /* definicion de la funcion */ {
    int progresion= 1;
    for(int i=1;i<=b;i++){
        progresion = progresion + (a^i);
    }
    return progresion;
}
