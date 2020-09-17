#include <stdio.h>
#include <stdlib.h>
int main()
{


int i, note,som=0;
    printf("entrez les notes");
    for(i=0;i<31;i++)
{
   scanf("%d",&note);
   som=som+note;
}
som/=30;
printf("la moyenne est de %d",som);


}
