#include <stdio.h>

struct Persone{
    char nom[50];
    char prenom[50] ;
    int age;
};
int main(){
    struct Persone p1 = {"oussama","elhamili",24} ;
    printf("Nom : %s\n",p1.nom);
    printf("prenom : %s\n",p1.prenom);
    printf("age : %d\n",p1.age);
    return 0 ;
}