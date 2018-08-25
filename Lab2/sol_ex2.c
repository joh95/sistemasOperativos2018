/**
 *   @brief  Obtiene el indice de la primera aparicion de un caracter en un array
 *
 *   @param  array cadena de caracteres a ingresar
 *   @param  ch es el caracter a ingresa
 *   @return el indice del primer ch en la cadena array
 */
#include <stdio.h>


int obtenerIndice(char *array, char ch) {
  // Coloque su codigo aqui...+
  int contador = 0;
  int posicion = 0;
  char *p1=array;
  
  while(*p1 != '\0'){
      if(*p1==ch){
        
        contador++;
        break;
      }posicion++;
      p1++;
  }
  if(contador==0){
      posicion = -1;
  }
  return posicion;
}

int main(){
    char *palabra,letra;
    int posicion=0;
    printf("Ingrese letra: ");
    scanf("%c",&letra);
    printf("Ingrese palabra: ");
    scanf("%s",palabra);


    posicion = obtenerIndice(palabra,letra); 
    if(posicion==-1){printf("La palabra que ingreso no contiene la letra: %c\n\n",letra);
    }else{
    printf("La posicion de %c es: %d \n\n",letra,posicion);}
    return posicion;
}
