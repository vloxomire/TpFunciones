#include<iostream>

using namespace std;
//Ejercicio #1
/*Crear un programa que tenga una función Swap que reciba 2 referencias a enteros y los
intercambie.*/
void Swap(short&,short&);

int main()
{
	short valor1=1, valor2=2;
	Swap(valor1,valor2);
	cout << valor1<< valor2;
	return 0;
};

void Swap(short& v1,short& v2) 
{
	short aux = 0;
	aux = v1;
	v1 = v2;
	v2 = aux;
};
//Ejercicio #2
/*Crear un programa que tenga un struct Personaje compuesto por vida y una inicial.
Llenar sus datos mediante el input del usuario.
Crear una función AplicarDamage el cual recibe un personaje y el damage a restarle en
su vida.
Loopear el llamado de la función hasta que el personaje no tenga más vida.
Opcionalmente podemos dejar como default el damage en 10, siendo configurado
desde la función.
Ejercicio #3
Crear un programa que amplíe el struct personaje anterior agregando un struct
POSICIÓN (compuesto por x e y) en el cual tengamos 2 funciones.
SetPosicion, el cual recibe el personaje y una posición. Debe reemplazar la posición del
personaje.
MoverPosicion, la cual recibe un personaje y una posición de diferencia. Se debe sumar
a la posición actual la recibida como parámetro.
Ejercicio #4
Crear un programa que mediante una función OrdenarArreglo reciba un array y lo
devuelva ordenado de mayor a menor.
Ampliarlo para que con un enum ORDENAMIENTO (MAYOR, MENOR) pasado como
parámetro devuelva el arreglo de mayor a menor o viceversa.
Ejercicio #5
Crear un programa con una función que reciba un arreglo de chars y un carácter a
eliminar.
La función debe buscar y borrar los caracteres encontrados, corriendo el arreglo para
dejarlo sin espacios.*/