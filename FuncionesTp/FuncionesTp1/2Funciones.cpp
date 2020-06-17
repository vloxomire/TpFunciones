#include<iostream>

using namespace std;
//Ejercicio #1
/*Crear un programa que tenga una funci�n Swap que reciba 2 referencias a enteros y los
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
Crear una funci�n AplicarDamage el cual recibe un personaje y el damage a restarle en
su vida.
Loopear el llamado de la funci�n hasta que el personaje no tenga m�s vida.
Opcionalmente podemos dejar como default el damage en 10, siendo configurado
desde la funci�n.
Ejercicio #3
Crear un programa que ampl�e el struct personaje anterior agregando un struct
POSICI�N (compuesto por x e y) en el cual tengamos 2 funciones.
SetPosicion, el cual recibe el personaje y una posici�n. Debe reemplazar la posici�n del
personaje.
MoverPosicion, la cual recibe un personaje y una posici�n de diferencia. Se debe sumar
a la posici�n actual la recibida como par�metro.
Ejercicio #4
Crear un programa que mediante una funci�n OrdenarArreglo reciba un array y lo
devuelva ordenado de mayor a menor.
Ampliarlo para que con un enum ORDENAMIENTO (MAYOR, MENOR) pasado como
par�metro devuelva el arreglo de mayor a menor o viceversa.
Ejercicio #5
Crear un programa con una funci�n que reciba un arreglo de chars y un car�cter a
eliminar.
La funci�n debe buscar y borrar los caracteres encontrados, corriendo el arreglo para
dejarlo sin espacios.*/