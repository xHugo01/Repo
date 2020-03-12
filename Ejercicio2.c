/**
* Title: Ejercicio_2
* Description: Pide 3 datos distientos y los muestra 
* @author: H. de la Cámara
* @organization: University of Burgos
* @date: 2020/02/11
* @version: 1.0
*/

#include<stdio.h>

int main() {
	unsigned int a;
	signed int b;
	long int c;
	printf("Introduce 3 numeros: ");
	scanf("%u%i%lu",&a,&b,&c);
	printf("Se han introducido: %u, %i, %lu \n",a,b,c);
	return 0;
}
