#include <stdio.h>
int main()
 {
    int compteur =8;
   
    if (compteur >= 10) {
        printf("Erreur : compteur doit être strictement inférieur à 10.\n");
        return 1;
    }
/* Utilisation boucle For
    for (int ligne = 1; ligne <= compteur; ligne++) {
        for (int colonne = 1;  colonne<= ligne; colonne++) {
            printf("* ");
        }
        printf("\n");
    }
        */

    
        /* Utilisation Boucle While

         int i=1, j=1;
        while (compteur>=1)
        {
        while (j<=i) {
                printf("* ");
                j++;
            }
            printf("\n");
            i++;
            j=1;
            compteur--;

        }*/
        // Utilisation Boucle Do While
        int i=1, j=0;
       do 
        {
       do {
                printf("* ");
                j++;
            }  while (j<i);
            printf("\n");
            i++;
            j=0;
            compteur--;

        } while (compteur>=1);

    return 0;
}


 
