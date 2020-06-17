#include<iostream>
#include<stdio.h>
#include<time.h>
using namespace std;
//Ejercicio #1
/*Crear un programa que tenga una función Swap que reciba 2 referencias a enteros y los
intercambie.*/
/*void Swap(short&,short&);

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
};*/
//Ejercicio #2
/*Crear un programa que tenga un struct Personaje compuesto por vida y una inicial.
Llenar sus datos mediante el input del usuario.
Crear una función AplicarDamage el cual recibe un personaje y el damage a restarle en
su vida.
Loopear el llamado de la función hasta que el personaje no tenga más vida.
Opcionalmente podemos dejar como default el damage en 10, siendo configurado
desde la función.*/
/*struct PERSONAJE 
{
	short vida = 0;
	char inicial = ' ';
};

void Input(PERSONAJE& p);
bool AplicarDamage(PERSONAJE& p);

int main()
{
	bool vivo = false;
	PERSONAJE personaje;
	Input(personaje);
	cout << personaje.vida<<personaje.inicial;
	do
	{
		vivo=AplicarDamage(personaje);
	} while (vivo);
	
	return 0;
};

void Input(PERSONAJE& p)
{
	cout << "Ingrese la vida de pj" << endl;
	cin >>p.vida ;
	cout << "Ingrese una Inicial para el pj" << endl;
	cin >> p.inicial;
};

bool AplicarDamage(PERSONAJE& p)
{
	bool vi = true;
	short damage = 10;
	p.vida=p.vida - damage;
	if (p.vida<=0)
	{
		vi = false;
	}
	else 
	{
		vi = true;
	}
	return vi;
};*/
//Ejercicio #3
/*Crear un programa que amplíe el struct personaje anterior agregando un struct
POSICIÓN (compuesto por x e y) en el cual tengamos 2 funciones.
SetPosicion, el cual recibe el personaje y una posición. Debe reemplazar la posición del
personaje.
MoverPosicion, la cual recibe un personaje y una posición de diferencia. Se debe sumar
a la posición actual la recibida como parámetro.*/
/*struct POSICION
{
	short x = 0;
	short y = 0;
};
struct PERSONAJE
{
	short vida = 100;
	char inicial = 'K';
	POSICION posicion;
};


void SetPosicion(PERSONAJE& per,POSICION p);
void MoverPosicion(PERSONAJE& per,POSICION p);

int main() 
{
	PERSONAJE per;
	POSICION po;

	po.x = 2;
	po.y = 3;

	SetPosicion(per,po);
	cout << per.posicion.x << per.posicion.y;
	MoverPosicion(per, po);
	cout << per.posicion.x << per.posicion.y;
	return 0;
}

void SetPosicion(PERSONAJE& per,POSICION p) 
{
	per.posicion = p;
};

void MoverPosicion(PERSONAJE& per, POSICION p)
{
	per.posicion.x += p.x;
	per.posicion.y += p.y;
	
};*/
//Ejercicio #4
/*Crear un programa que mediante una función OrdenarArreglo reciba un array y lo
devuelva ordenado de mayor a menor.
Ampliarlo para que con un enum ORDENAMIENTO (MAYOR, MENOR) pasado como
parámetro devuelva el arreglo de mayor a menor o viceversa.*/
void OrdenarArreglo(short a[],short);

int main() 
{
	srand(time(NULL));
	const short TAM = 5;
	short matriz[TAM];

	for (size_t i = 0; i < TAM; i++)
	{
		matriz[i] = rand() % 10 + 1;
	}
	for (size_t i = 0; i < TAM; i++)
	{
		cout << matriz[i]<<",";
	}
	cout << endl;
	OrdenarArreglo(matriz,TAM);
	for (size_t i = 0; i < TAM; i++)
	{
		cout << matriz[i] << ",";
	}
};

void OrdenarArreglo(short a[],short t) 
{
	short aux = 0;
	for (size_t i = 0; i < t; i++)
	{
		for (size_t j = i+1; j < t; j++)
		{
			if (a[i]<a[j])
			{
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
		}
	}
};
//Ejercicio #5
/*Crear un programa con una función que reciba un arreglo de chars y un carácter a
eliminar.
La función debe buscar y borrar los caracteres encontrados, corriendo el arreglo para
dejarlo sin espacios.*/