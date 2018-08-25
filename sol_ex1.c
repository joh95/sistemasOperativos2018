/**
 *   @brief  Cuenta las veces que aparece un caracter determinado dentro de una cadena.
 *
 *   @param  array cadena de caracteres a ingresar
 *   @param  ch es el caracter a averiguar
 *   @return el numero de veces que aparece ch en array o -1 si no aparece.
 */
#include <stdio.h>


int contarCaracter(char *array, char ch) {
  // Coloque su codigo aqui...+
  int contador = 0;
  char *p1=array;
  
  while(*p1 != '\0'){
      if(*p1==ch){
        contador++;
      }
      p1++;
  }
  if(contador==0){
      contador = -1;
  }
  return contador;
}

int main(){
    char *palabra,letra;
    int contador=0;
    printf("Ingrese letra: ");
    scanf("%c",&letra);
    printf("Ingrese palabra: ");
    scanf("%s",palabra);


    contador = contarCaracter(palabra,letra); 
    if(contador==-1){printf("La palabra que ingreso no contiene la letra: %c\n",letra);
    }else{
    printf("La cantidad de %c's son:%d \n\n",letra,contador);}
    return contador;
}
