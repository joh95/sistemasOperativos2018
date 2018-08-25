#include <stdio.h>

int main()
{
    int numFinal;
  printf("Numero final: ");
  scanf("%d", &numFinal);
  for(int i=1;i<=10;i++){
    for(int j=1;j<=numFinal;j++){
      printf("%d X %d = %d   ",j,i,i*j);
    }
    printf("\n");
  }
  return 0;
}
