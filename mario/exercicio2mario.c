#include <stdio.h>

void funcaoPiramide(int tam){ // construir a piramide com hash "#"
int hash =0;
int v =0,t = 8; //armazenar a diferença entre tamanho e quantidade de hash
printf("Altura = %d\n",tam);
for (int i = 1; i <= tam; i++)
{
    hash = i;
    v = tam - hash;
    // Imprimindo a primeira parte dos hashs
     while (v)
    {
        printf("%c",32); // em ASCII " " = 32 (decimal)
        v--;
    }
    while (hash)
    {
        printf("%c",35); // em ASCII "#" = 35 (decimal)
        hash--;
    }
    hash = i;
    printf("%c",32);
    while (hash)
    {
        printf("%c",35); // em ASCII "#" = 35 (decimal)
        hash--;
    }
    printf("\n");
}

}
int main(int argc, char const *argv[])
{
    int tamanho = 0;
    scanf("%d",&tamanho);
    while (tamanho < 1 || tamanho > 8)
    {
        printf("tamanho invalido\n");
        scanf("%d",&tamanho);
    }
    funcaoPiramide(tamanho);
    return 0;
}
