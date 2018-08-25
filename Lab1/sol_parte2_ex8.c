#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int generarNumero(int max, int min);


int generarNumero(int max, int min) {
   int aleatorio;
   aleatorio = rand()%2; //Genera un numero entre max y min
   return aleatorio;  
}

int main(){
    int numero, numeroCaras=0, numeroSellos=0;
    
    printf("Ingrese numero: ");
    scanf("%d",&numero);

    for(int i=0; i<numero; i++){
        if(generarNumero(0,1)%2==0){
            printf("C");
            numeroCaras++;
            
        }else{
            printf("S");
            numeroSellos++;
        }
    }
    printf("\n\n");
    printf("El numero de CARAS es: %d\n", numeroCaras);
    printf("El numero de SELLOS es: %d\n", numeroSellos);
    
    return 0;
}
