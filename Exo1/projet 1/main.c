#include <stdio.h>
#include <stdlib.h>
int main()
{
    int add = 1, quantite,montant;
    float prix, total;


    printf("--- Calcule de Facture ---\n");
    printf("présenté articles");

    printf("montant de l'article\n");
    scanf("%d", &montant);

    printf("nombre d'article\n");
    scanf("%d", &quantite);

    total = total + (quantite * montant);

    if (total >500){
    total*=0.9;
    }



    printf("vous devez payé %f", total);

}

