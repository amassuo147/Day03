#include <stdio.h>
#include <string.h>

int main(){

    int choix;
    struct contact{
        char Nom[50],Numero[50],AdressEmail[50];
    };
    
    do {
        printf("\n///////MENU///////\n");
        printf("1.Ajouter un contact\n");
        printf("2.Rechercher un contact\n");
        printf("3.Modifier un contact\n");
        printf("4.Supprimer un contact\n");
        printf("5.Afficher les contact\n");
        printf("0.Exit\n");
        printf("Votre Choix :");
        scanf("%d",choix);
    }while(choix!=0) ;
    switch (choix){
    case 1:
         printf("Nom :\n");
         scanf("%s",&Nom);
         printf("Numero de telephone :\n");
         scanf("%s",&Numero);
         printf("Adress E-mail :\n");
         scanf("%s",&AdressEmail);
        break;
    case 2:
        
        break;    
    case 3:
        
        break;
    case 4:
        
        break;
    case 5:
        
        break;   
    case 0:
        
        break;         
    default:
        break;
    }
    
return 0 ;
}