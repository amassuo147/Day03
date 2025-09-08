#include <stdio.h>
#include <string.h>

int main(){

    int i,f = 0 ;
    char chcara[300], c; 
    printf("entre une chaine de caractere : \n");
    fgets(chcara,300,stdin);
    printf("entre un caractere: \n");
    scanf("%c",&c);
    for (i = 0; i < 300; i++){
        if (chcara[i]==c){
            f = f +1;
        }
    }
    printf("le caractere apparait %d fois ",f);
    return 0 ;
}