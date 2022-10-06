#include <stdio.h>
#include <string.h>
// índice Coleman-Liau - Para calcular o nivel de leitura de um texto
void obterValores(char* texto){
    int palavras = 1;
    int letras = 0; //numério médio de letras
    int sentencas = 0; // numero medio de sentenças por 100 palavras de texto
    int grade = 0;// Grade X = Resultado Final índice = 0,0588 * L - 0,296 * S - 15,8
    printf("%s\n",texto);
    for (int i = 0; i < strlen(texto); i++)
    {
        if (texto[i] == ' ')
        {
            palavras++;
        }
        else if(texto[i] == '!' || texto[i] == '.' || texto[i] == '?')
        {
            sentencas++;
        }
        
        else
        {
            if(texto[i] != ',')
            letras++;
        }
    }
    //printf("Palavras: %d\nSetencas: %d\n Letras %d\n Grade: %d\n",palavras,sentencas,letras-1,grade);
    
    //letras = letras*100/palavras;
    //sentencas = sentencas*100/palavras;
    grade = 0.0588 * letras*100/palavras - 0,296 * sentencas*100/palavras - 15,8; // a formula apresenta problemas
    letras = letras*100/palavras;
    //printf("Grade: %d\n",grade);
    sentencas =sentencas*100/palavras;
    //printf("Grade: %d\n",grade);
    printf("Palavras: %d\nSetencas: %d\n Letras %d\n Grade: %d\n",palavras,sentencas,letras-1,grade); 
    

}

int main(int argc, char const *argv[])
{
    char texto[500];
    char* ptexto = &texto[0];
    //scanf("%s",texto);
    fgets(texto,500,stdin);
    obterValores(ptexto);
    return 0;
}
