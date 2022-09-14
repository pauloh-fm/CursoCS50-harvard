#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int algoritmoLuhn(char* pNCartao){
  int i = 0;
  int valor = 0;
  int soma = 0; // aqui será armazenado o resultado
  // passo 1 do algoritmo:
  for(i = 15; i>=0 ;i--){
    valor = pNCartao[i] -48; // convertendo char em int
    if((i%2)==0){
      if(valor*2 > 9)
        soma+=valor*2 - 9; // como é para somar os digitos, caso o valor*2 tenha 2 digitos, temos que somar o primeiro digito = 1 + segundo digito = valor*2 - 10 então o resultado final é valor*2 - 9
      else
      soma+=valor*2; // passo 2
      //printf("I =%d Soma = %d\n",i,soma);
    }
    else{ //passo 3
      soma+=valor;
      }
  }
  //passo 4
  if((soma%10) == 0) 
    return 1;
  else
    return 0;
}
int main(void){
/*Algoritmo de Luhn
1 passo: começando pelo penultimo( ultimo - 1) , multiplicar por 2 cada valor após 2 contagens
2 passo : somar esses valores multiplicados
3 passo : somar com os valores não multiplicados
4 passo : verificar se o ultimo digito é 10 if((somaTotal % 10) == 0)
ex:
4003600000000014
*/
char nCartao[17]; //vetor contendo o numero do cartão
char* pont =&nCartao[0]; //ponteiro que aponta para o endereço inicial do vetor
scanf ( "%16[^\n]", nCartao);
//fgets(nCartao, 17, stdin);
printf("Numero: %s\n",nCartao);

if(algoritmoLuhn(pont))
  printf("VISA\n");
else
  printf("Numero incorreto\n");
//algoritmoLuhn(pont);
return 0;
}