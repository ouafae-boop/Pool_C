#include<stdio.h>
int sqrt_x(int nb) {
 float r ;
 printf("Entrer un nombre: ");
 scanf("%d", &nb);
 r = sqrt_x(nb);
 printf("La racine carree de %d est: %f\n", nb, r);
 return 0;
}







