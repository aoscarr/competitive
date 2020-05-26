#include <stdio.h>
#include <stdlib.h>

char *print_Decimal_To_Binario(long long valor){
  long long cpValor = valor;
  char *binario = malloc(sizeof(char)*n*2);
  char temp[n*2];
  int k=0, aux;
  while(cpValor > 0 && k<n){
    aux = cpValor%2;
    temp[k++] = (char)(48+aux);
    cpValor /= 2;
  }
  printf("Binario: ");
  if(valor == 0) printf("0");
  for(int j=k-1; j>=0;j--)
    printf("%c",temp[j]);
  printf("\n" );
  int j=0;
  for(int i=k-1;i>=0;i--)
    binario[i] = temp[j++];

  return binario;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", n);
}