/**
* Title: Ejercicio_1
* Description: Pide 3 datos separados por comas y te dice cuantos ha leido por pantalla
* @author: H. de la Cámara
* @organization: University of Burgos
* @date: 2020/02/11 
* @version: 1.0
*/

#include<stdio.h>

int main() {
	int a,b,c;
	printf("Introduce 3 numeros: ");
	int numeros = scanf("%i,%i,%i",&a,&b,&c);
	printf("Se han introducido %i datos\n",numeros);
	return 0;
}
