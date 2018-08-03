#include <stdio.h>
#include <math.h>
float progres(int x, int n); /* prototipo de funcion */
long factorial(long f);

int main() {
    int x, y;
    float max;
    printf("Introduzca X y n, respectivamente: ");
    scanf("%d %d", &x, &y);
    max = progres(x, y); /* llamada a la funcion */
    printf("El resultado de la progresion es= %f \n",max);
    return 0;
}

float progres(int x, int n) /* definicion de la funcion */ {
    float progresion= 1;
    for(int i=1;i<n;i++){
        if(i%2==0){
            progresion = progresion + pow(x,2*i)/factorial(2*i);
            printf("%f es positiva  \n",progresion);
        }else{
            progresion = progresion - pow(x,2*i)/factorial(2*i);
            printf("%f es negativa  \n",progresion);
        }
        
    }
    return progresion;
}

long factorial(long f)
{
    if ( f == 0 ) 
        return 1;
    return(f * factorial(f - 1));
}
