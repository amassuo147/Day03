#include <stdio.h>
#include <string.h>

int main(){
    
    char chcara[300] ; 
    printf("entre une chaine de caractere :");
    fgets(chcara,300,stdin);
    printf("la chaine de caractere donner est : %s ",chcara);
    return 0 ;
}