#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* prototipo de funcion */
int comparar(int num1,int num2,int res );

int main() {
    srand (time(NULL));
    int x, y,z=0,a=0;
    int max,terminar=0,verifica;
    do{
        x=rand()%10;
        y=rand()%10;
        do{
            printf("¿Cuánto es %d veces %d?\n",x,y);
            scanf("%d", &max);
            verifica=comparar(x,y,max);
            a=rand()%4;
            printf("%d  %d",a,verifica);
            if(verifica==1){
                switch(a){
                    case 0 :printf("Muy bien!\n");break;
                    case 1 :printf("Excelente!\n");break;
                    case 2 :printf("Buen trabajo!\n");break;
                    case 3 :printf("Sigue haciéndolo bien!\n");break;
                }
                z=1;
            }else{
                switch(a){
                case 0 :printf("No. Por favor trata de nuevo.\n");break;
                case 1 :printf("Incorrecto. Trata una vez más.\n");break;
                case 2 :printf("No te rindas!\n");break;
                case 3 :printf("No. Trata de nuevo\n");break;
                }
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
