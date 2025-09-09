#include <stdio.h>
#include <string.h>

struct Etudiant{
    char nom[50];
    char prenom[50] ;
    int note[2];
};
int main(){
    struct Etudiant e1 ;
    strcpy(e1.nom, "elh");
    strcpy(e1.prenom, "oussama");
    e1.note[0] = 15;
    e1.note[1] = 16;
    printf("Nom : %s\n",e1.nom);
    printf("prenom : %s\n",e1.prenom);
    printf("note : %d , %d\n",e1.note[0],e1.note[1]);
    return 0 ;
}