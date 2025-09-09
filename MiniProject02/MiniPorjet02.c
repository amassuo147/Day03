#include <stdio.h>
#include <string.h>

struct contact{
    char Nom[300][50];
    int Numero[300];
    char AdressEmail[300][50];
};
char contact[300] ;
int main(){

    struct contact c ;
    int choix; 
    int cn = 0 ;
    do {
        printf("\n///////MENU///////\n");
        printf("1.Ajouter un contact\n");
        printf("2.Rechercher un contact\n");
        printf("3.Modifier un contact\n");
        printf("4.Supprimer un contact\n");
        printf("5.Afficher les contact\n");
        printf("0.Exit\n");
        printf("Votre Choix :");
        scanf("%d",&choix);
    
        switch (choix){
            
            case 1:
                printf("Nom : ");
                scanf("%49s",c.Nom[cn]);
                printf("Numero de telephone : ");
                scanf("%49d",&c.Numero[cn]);
                printf("Adress E-mail : ");
                scanf("%49s",c.AdressEmail[cn]);
                cn++;
                break;
            case 2:
                char Recherche[50];
                printf("Donner Nom du contact : ");
                scanf("%s",Recherche);
                int tr, j;
                for ( int i = 0; i < cn; i++){
                    if (strstr(c.Nom[i],Recherche) !=NULL) {
                        tr = 1 ;
                        j = i ;
                    }  
                    else {
                        tr = 0 ;
                    }
                }
                if (tr == 1){
                    printf("//Contact Trouve//\n");
                    printf("Nom : %s \nNumero : %d \nAdress Email : %s\n",c.Nom[j],c.Numero[j],c.AdressEmail[j]);
                }
                else{
                    printf("%s Pas Trouve en Liste du Contact",Recherche);
                }
                break;
            case 3:
                char modifier[50];
                printf("Donner Nom du Contact : ");
                scanf("%49s",modifier);
                char NNom[50];
                int NNumero ;
                char NAdressEmail[50] ;
                int f = 0 ;
                for (int i = 0; i < cn; i++){
                    if (strstr(c.Nom[i],modifier)!=NULL){
                        f = 1 ;
                        printf("///Modifier///\n");
                        printf("Nouveau Nom : ");
                        scanf("%49s",NNom);
                        strcpy(c.Nom[i],NNom);
                        printf("Nouveau Numero de telephone : ");
                        scanf("%d",&NNumero);
                        c.Numero[i] = NNumero ;
                        printf("Nouveau Adress E-mail : ");
                        scanf("%49s",NAdressEmail);
                        strcpy(c.AdressEmail[i],NAdressEmail);
                        break;
                    }
                if(f == 0){
                    printf("Contact N'existe Pas");
                }
                }
                break;    
            case 4:
                char Supprimer[50] ;
                printf("Donner Nom du Contact : ");
                scanf("%49s",Supprimer);
                for (int i = 0; i < cn; i++){
                    if (strstr(c.Nom[i],Supprimer)!=NULL){
                        for (int j = i; j < cn; j++){
                            strcpy(c.Nom[j],c.Nom[j+1]) ;
                            c.Numero[j] = c.Numero[j+1] ;
                            strcpy(c.AdressEmail[j],c.AdressEmail[j+1]);
                            printf("Contact a ete Supprimer");
                            break;
                        }
                    }
                    else{
                        printf("Contact N'existe Pas");
                    }
                }
                break;
            case 5:
                if (cn == 0) {
                    printf("Liste est Vide\n");
                }
                else {
                    printf("///Liste du Contact///\n");
                    for (int i = 0; i < cn; i++){
                        printf("%d - Nom : %s | Numero : %d | Adress Email : %s\n",i+1,c.Nom[i],c.Numero[i],c.AdressEmail[i]);
                    }
                }
                break;
            case 0:
                printf("Au Revoir\n");
                break;  
            default:
                printf("Choix invalide reessayer\n");
        }
    } while(choix!=0) ;
    return 0 ;
}