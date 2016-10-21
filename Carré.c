#include <stdio.h>
#include <stdlib.h>

/* Algo
    Afficher un carré de caractères

    But: créer un carré de caractères acec des valeurs données par un utilisateur
    Entree: Valeurs entrées par l'utilisateur
    Sortie: afficher le carré avec les valeurs de l'utilisateur

    Variables
    longueur,largeur,i,j : entier

    DEBUT

        ECRIRE  Entrez la largeur du carré
        LIRE largeur
        ECRIRE Entrez la longueur du carré
        LIRE longueur

        POUR i de 0 à longueur FAIRE
            POUR j de 0 à largeur FAIRE
                SI i=0 OU i=longueur -1 ALORS
                    ECRIRE *
                FINSI
                SAUF SI j=0 OU j=largeur -1 ALORS
                    ECRIRE *
                FINSI
                SAUF SI j <> 0 OU j <> largeur -1 ALORS
                    ECRIRE +
                FINSI
            FINPOUR

            ECRIRE

        FINPOUR
FIN
*/




int main()
{
    //Declaration des variables
    int longueur=0;
    int largeur=0;
    int i=0;
    int j=0;

    //afficher des caractères et lire les variables
    printf("Entrez la largeur du carre\n");
    scanf("%d",&largeur),
    printf("Entrez la longueur du carre\n");
    scanf("%d",&longueur);

    //Gère les caractères sur la longueur et la largeur
    for (i=0 ; i<longueur ; i++){
        for (j=0 ; j<largeur ; j++){

            if (i==0 || i==longueur -1){
                printf("*");
            } else if (j==0 || j==largeur -1){
                printf("*");
            } else if (j!=0 || j!=largeur -1){
                printf("+");
            }

        }   printf("\n");



    }
    return 0;
}
