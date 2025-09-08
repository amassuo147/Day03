#include <stdio.h>
#include <string.h>

int main(){

    int i;
    char chcara1[300],chcara2[300]conca[600] ; 
    printf("entre une chaine de caractere : \n");
    fgets(chcara1,300,stdin);
    printf("entre une autre chaine de caractere : \n");
    fgets(chcara2,300,stdin);
    for(i = 0; i < 300; i++){
        conca[i]=chcara1[i];
    }
    for (i = 0; i < 300; i++){
        conca[i+300]=chcara[i] ;
    }
    printf("concatene : \n");
    for (i = 0; i < 600; i++){
        printf("%s",conca[i]);
    }
    return 0 ;
}