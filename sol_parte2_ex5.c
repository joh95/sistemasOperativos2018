#include <stdio.h>
#include <stdlib.h>

int invertir(int numero)
{
    int inverso = 0;
    while (numero != 0) {
            inverso = inverso * 10 + numero%10;
            numero = numero / 10;
    }
    return inverso;
}

int main(){
    int number1, numeroInverso;
    printf("Ingrese el numero que desea invertir: ");
    scanf("%d",&number1);

    numeroInverso = invertir(number1); 
    printf("el numero inverso de %d es %d: \n\n",number1, numeroInverso);
    return 0;
}
