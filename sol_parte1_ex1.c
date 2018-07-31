#include <stdio.h>

int main()
{
    int venta,comision;
  printf("Digite la venta: ");
  scanf("%d", &venta);
  if(venta <=20000){
      comision= venta*0.05;
  }else{
          if(venta <=50000){
               comision= venta*0.07+1000;
          }else{
              comision= venta*0.1+3100;
          }
  }
printf("Su comision fue de: %d\n", comision);
return comision;
  
}
