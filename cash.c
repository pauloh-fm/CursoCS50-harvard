#include <stdio.h>
#include <math.h>

// moedas de 25, 10, 5 e 1 centavo(s)
void contarMoedas(float valor){
    int i =0, cont[]={0,0,0,0},moedas[] = {25,10,5,1};
    printf("valor = %f centavos\n",valor);
    while (valor)
    {
      if (valor >= moedas[i])
      {
        
        valor-=moedas[i]; //redefinindo o valor inicial
        cont[i]+=1; // incrementando a quantidade da moeda correspondente
      }
      else
      {
        i++; // proxima posição do vetor moedas e cont
      }
   
      
    }
 //imprimindo o resultado
    printf("Moedas de R$0.25: %d\nMoedas de R$0.10: %d\nMoedas de R$0.05: %d\nMoedas de R$0.01: %d\n",cont[0],cont[1],cont[2],cont[3]); 
}
int main(int argc, char const *argv[])
{
    float entrada = 0;
    do
    {
    scanf("%f",&entrada);
    } while (entrada <= 0);
    // valor valido sendo contabilizado e imprimido
    contarMoedas(round(entrada*100)); //round garantirá que o valor será arredondado corretamente
    
    return 0;
}
