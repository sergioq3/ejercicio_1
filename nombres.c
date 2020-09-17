#include <stdio.h>
#define MAX 6

void main (void)
{
    char nombre_1 [MAX]= {"Paul  "};                                     //inicializacion de la variable con el nombre del primer integrante
	
	printf("\nHola, este programa transforma el nombre del primer integrante del grupo (%s) y lo transforma en el nombre del segundo integrante (%s).\n\n", "Paul", "Sergio");    //saludo
	//definicion operaciones para transformar el nombre
	nombre_1 [4] = nombre_1 [1] | (1<<3);                                        //transforma 'ESPACIO' en 'i', se hace primero ya que en la operacion se usa el contenido de la posicion [1] antes de que tenga su nuevo valor
	nombre_1 [5] = 0xFF&((0xFF>>4) | (nombre_1 [1] & 0b11111110));               //transforma 'ESPACIO' en 'o', se hace primero ya que en la operacion se usa el contenido de la posicion [1] antes de que tenga su nuevo valor 
    nombre_1 [0] = nombre_1 [0] | 0b00000011;                                    //transforma 'P' en 'S'
	nombre_1 [1] = nombre_1 [1] | (0b00000001<<2);                               //transforma 'a' en 'e'
	nombre_1 [2] = (nombre_1 [2] & 240)|((nombre_1[2]>>5)& 0b00000010) ;         //transforma 'u' en 'r'
	nombre_1 [3] = (((nombre_1 [3]>>2) & 0b00001011) | 0xCF)>>1;                 //transforma 'l' en 'g'
    printf("\tEl nombre 1 transformado al dos es: %s\n\n", nombre_1);            //imprime el arreglo despues de transformado el nombre
}