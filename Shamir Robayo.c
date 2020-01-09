/*Realizar un programaen C que tenga dos funciones:
inicializar los elementosen un arreglo.
Ingresar los elementos del arreglo por teclado usando punteros*/
#include<stdio.h>

void inicializacionArreglo(int[],int*);

void ingresoElementos(int[],int tam, int *);

void main()
{
	int arreglo[]={2,3,1,-4},*p,tam;
	inicializacionArreglo(arreglo,p);
	printf("Ingrese el tama%co: ",164);
	scanf("%d",&tam);
	ingresoElementos(arreglo,tam,p);//llamada a la funcion
}
void inicializacionArreglo(int arreglo[],int *p)
{
	int i=0;
	p=arreglo;
	while(i<4)
	{
		printf("%d\n",*p++);
		i++;
	}
}
void ingresoElementos(int arreglo[],int tam,int *p)
{
	int i=0,j=0;
	while(i<tam)
	{
		printf("Ingrese el elemento %d :",j+1);
		scanf("%d",&arreglo[i]);
		i++;
		j++;
	}
	p=arreglo;
	i=0;
	while(i<tam)
	{
		printf("%d\n",*p++);
		i++;
	}
}
