
#include <stdio.h>

void main(void)
{
   //Funcion para leer un archivo 
	char ARCHIVO[256];

	FILE* fp; //FILE POINTER (PUNTERO DE ARCHIVO)
	printf("COLOQUE LA RUTA O NOMBRE DEL ARCHIVO: ");
	scanf_s("%s", ARCHIVO, 255);
	fopen_s(&fp, ARCHIVO, "r"); //r es de lectura (read) // el nombre almacenado se lo da a fp para indicar que es un archivo 
}

