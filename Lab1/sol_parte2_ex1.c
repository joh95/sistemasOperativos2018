#include <stdio.h>
int multiplo(int a, int b); /* prototipo de funcion */

int main() {
    int x, y;
    int max;
    printf("Introduzca dos numeros: ");
    scanf("%d %d", &x, &y);
    max = multiplo(x, y); /* llamada a la funcion */
    if(max==1){
        printf("El segundo numero es multiplo del primero \n");
    }else{
        printf("El segundo numero no es multiplo del primero \n");
    }
    return 0;
}

int multiplo(int a, int b) /* definicion de la funcion */ {
    if (b > a){
        if(b%a==0){
            return 1;
        }
    }
    return 0;
}
