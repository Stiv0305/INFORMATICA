//STIVEN GROPA
#include <stdio.h>
int main()
{
	//DICHIARAZIONE E INIZIALIZZAZIONE
	float media;
	int i;
	float somma=0;
	double vet[10];
	
	//CICLO E CALCOLO SOMMA
	for(i=0; i<10; i++) {
		printf("Inserisci il %d numero: \n", i+1);
		scanf("%lf", &vet[i]);
		somma=somma+vet[i];
	}
	media=somma/10;
    printf("la somma e': %f \n", somma);
    printf("la media e': %f \n", media);
	return 0;
}
