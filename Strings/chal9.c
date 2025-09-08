#include <stdio.h>
#include <string.h>

int main(){
    char esp ==' ';
    char chcara[300],espchcara[300];
    printf("entre une chaine de caractere : \n");
    fgets(chcara,300,stdin);
    for ( i = 0; i < 300; i++){
        if (strcmp(esp,chcara[i])!=0){
            strcpy(espchcara[i],chcara[i]);
        }
    }
    printf("chaine de caractere sans espace : %s",chcara);
    return 0 ;
}