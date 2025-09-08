#include <stdio.h>
#include <string.h>

int main(){

    int i,a=0;
    char chcara1[300],chcara2[300] ; 
    printf("entre une chaine de caractere : \n");
    fgets(chcara1,300,stdin);
    printf("entre une autre chaine de caractere : \n");
    fgets(chcara2,300,stdin);
    if (strcmp(chcara1,chcara2)==0){
        printf("les deux chaine sont egales \n");
    }
    else{
        printf("les deux chaine sont defferent");
    }    
    return 0 ;
}