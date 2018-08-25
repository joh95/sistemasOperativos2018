#include <stdio.h>

int main()
{
    int numRen;
  printf("Numero de renglones: ");
  scanf("%d", &numRen);
  for(int i=1;i<=numRen;i++){
    for(int j=0;j<i;j++){
        if((j+i)%2 == 0){
            printf("0");
        }else{
            printf("1");
        }
    }
    printf("\n");
  }
  return 0;
}
