#include <stdio.h>
#include <string.h>

int main(){

    int i ;
    char chcara[300] , inversechcara[300]; 
    printf("entre une chaine de caractere : \n");
    fgets(chcara,300,stdin);
    for ( i = 0; i < 300 ; i++){
        inverschcara[i]=chcara[300-1-i];
    }
    printf("l'inverse de %s est :" , chcara,invsechcara) ;   *
    return 0 ;
}