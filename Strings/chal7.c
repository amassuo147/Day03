#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    
    int i;
    char chcara[300],maj[300];
    printf("entre une chaine de caractere : \n");
    fgets(chcara,300,stdin);
    for ( i = 0; i < 300; i++){
        maj[i]=toupper(chcara[i]);
    }
    printf("chaine de caractere en majuscule : %s",maj);
    return 0 ;
}