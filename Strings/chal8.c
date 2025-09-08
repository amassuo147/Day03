#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    
    int i;
    char chcara[300],min[300];
    printf("entre une chaine de caractere : \n");
    fgets(chcara,300,stdin);
    for ( i = 0; i < 300; i++){
        min[i]=tolower(chcara[i]);
    }
    printf("chaine de caractere en minuscule : %s",min);
    return 0 ;
}