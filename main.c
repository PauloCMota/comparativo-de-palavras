#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p1[30],p2[30];
    //captura palavras
    printf("Informe palavra 1: ");
    gets(&p1);
    printf("Informe palavra 2: ");
    gets(&p2);
    // verifica se as palavras sao iguais
    if(strcmp(p1,p2)== 0)
    {
        printf("\nPalavra 1 igual %s ." , &p1 );
    }
    if(strcmp(p2,"papagaio ")== 0)
    {
        printf("\nPalavra 2 igual %s . " , &p2);
    }
    return 0;
}
