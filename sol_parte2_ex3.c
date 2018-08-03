#include <stdio.h>
#include <math.h>
// REVISAR !!!!

int potencia(int base, int exponente){
 
	if(exponente == 0){
		return 1;
	}else{
		return base*potencia(base,exponente-1);
	}
}
int serie (int x, int n){
    double aux =0;
    int maxExponente=((n-1)*2);

    if(maxExponente==0){
        return 1;
    }
    if (n>0){
       aux = (potencia(x,maxExponente))/maxExponente;
       //aux2 = potencia(-1,n);
       return aux + serie(x, maxExponente-2);
    }
}

int main(){
    short suma=0;
    int number1, number2;
    printf("Ingrese el primer numero: ");
    scanf("%d",&number1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&number2);

    suma = serie(number1, number2);
    printf("La suma de la serie es: %hd \n\n", suma);
}
