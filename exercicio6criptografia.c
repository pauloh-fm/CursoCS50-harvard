// caesar.c
#include <stdio.h>
#include <string.h>
#include <math.h>
void criptografarMensagem(char* textoi,int key){
    // Método : c i = (p i + k)% 26
    int var = 0; // irá armazenar temporáriamente o valor convertido em inteiro do texto
    int calc = 0;
    char textoc[105];
    printf("plaintext: %s",textoi);
    for (int i = 0; i < strlen(textoi)-1; i++)
    {
    var = (int)textoi[i];
    //printf("%c = %d\n",var,var);
 
    if((96<var||var<123)||(64<var||var<91))
    {
        if (96<var||var<123)
        {
        var = (var-97+key)%26; // atravez desse calculo, os valores são encriptados apenas atravez de letras
        textoc[i] = (char)(var+97); // soma-se 97 para retornar ao valor binário correspondente (ASCII)
         }
        else
        {
        var = (var-65+key)%26; // atravez desse calculo, os valores são encriptados apenas atravez de letras
        textoc[i] = (char)(var+65); // soma-se 65 para retornar ao valor binário correspondente (ASCII)
        }
    }
    else
        textoc[i] = textoi[i];

}
printf("ciphertext: %s\n",textoc); 
}


int main(int argc, char const *argv[])
{
    int key; //Chave que utilizaremos no algorimto de Cesár
    printf("Digite a chave:\n");
    scanf("%d",&key);
    char entrada[100];
    char* pEntrada = &entrada[0];
    //printf("\n");
    fflush(stdin);// limapando o buffer
    printf("Dogite o texto:\n");
    fgets(entrada,100,stdin); //obtendo o texto de entrada
    criptografarMensagem(pEntrada,key);
    return 0;
}

