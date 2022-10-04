#include <stdio.h>
#include <math.h>
int contagem(int valorI,int valorF){
    int anos;
    //int var = valorI;
    //printf("%f\n",cont);
    for (anos = 0; valorI < valorF; anos++)
    {
        valorI += (valorI/3) - (valorI/4);
    //   printf("%d\n",valorI);
    }


    printf("Years: %d\n",anos);
}
int main(int argc, char const *argv[])
{
    int start=0,end=0;
    
while( end <= start)
{
    
    if(start < 9)
        {
        scanf("%d",&start);
        printf("Start size: %d\n",start);
        }
    else{
        scanf("%d",&end);
        printf("End size: %d\n",end);
    }
    
}

    
    contagem(start,end);
    return 0;
}
