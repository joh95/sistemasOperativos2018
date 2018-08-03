#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* prototipo de funcion */
int comparar(int num1,int num2,int res );

int main() {
    srand (time(NULL));
    int x, y,z=0;
    int max,terminar=0,verifica;
    do{
        x=rand()%10;
        y=rand()%10;
        do{
            printf("¿Cuánto es %d veces %d?\n",x,y);
            scanf("%d", &max);
            verifica=comparar(x,y,max);
            if(verifica==1){
                printf("Muy bien!\n");
                z=1;
            }else{
                printf("No. Por favor intenta nuevamente\n");
            }
        }while(z==0);
        printf("Oprime cualquier tecla diferente de 0 para terminar\n");
        scanf("%d", &terminar);
    }while(terminar==0);
    return 0;
}

int comparar(int num1,int num2,int res ){
    if(num1*num2==res)return 1;
    return 0;
}
