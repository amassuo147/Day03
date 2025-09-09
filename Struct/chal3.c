#include <stdio.h>
#include <string.h>

struct rectangle{
    int longeur;
    int largeur;
};
int lair(int la,int lo){
    int air = la * lo ;
    return air ;
}
int main(){
    int a;
    struct rectangle e1 ;
    e1.longeur=5;
    e1.largeur=2;
    a=lair(e1.longeur,e1.largeur);
    printf("lair est : %d\n",a);
    return 0 ;
}