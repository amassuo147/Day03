#include <stdio.h>
#include <string.h>


int main() {
    
    char tracks[][80] = {
            "I left my heart in Harvard Med School",
            "Newark, Newark - a wonderful town",
            "Dancing with a Dork",
            "From here to maternity",
            "The girl from Iwo Jima",
        } ;
    
    char recherche[80];    
    printf("ecrire votre recherche :");
    fgets(recherche,80,stdin);
    int l=strlen(recherche);
    recherche[l-1]='\0' ;
    int a = 2 ; ;
    char *rs ;
    for (int i=0;i<80;i++){
        *rs = strstr(tracks[i],recherche);
        
    }
    if(rs!=NULL ){
            a = 1;
    }
    else {
        a = 0;
    }
    
    switch(a){
        case 1 :
            printf(" recherche trouve :%s",tracks);
            break ;
        case 0 :
            printf("pas trouve") ;
            break;
        default:
    }
    return 0;
}