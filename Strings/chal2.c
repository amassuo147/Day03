#include <stdio.h>
#include <string.h>

int main(){
    
    char chcara[300] ; 
    int l = 0;
    printf("entre une chaine de caractere :");
    fgets(chcara,300,stdin);
    while (chcara[l]!='\0'){
       l++ ;
    }
    l--;
    printf("la longueur de chaine de caractere : %d ", l);
    return 0 ;
}