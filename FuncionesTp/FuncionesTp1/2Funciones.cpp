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
/*enum class ORDENAMIENTO {MAYOR=1,MENOR};
void OrdenarArreglo(short a[],short,ORDENAMIENTO);
void CrearArray(short m[],short);
void MostrarArray(short m[], short);
ORDENAMIENTO Menu(ORDENAMIENTO);

int main() 
{
	srand(time(NULL));
	const short TAM = 5;
	short matriz[TAM];
	ORDENAMIENTO ord=ORDENAMIENTO::MAYOR;

	CrearArray(matriz,TAM);
	ord=Menu(ord);
	OrdenarArreglo(matriz,TAM,ord);
	return 0;
};

ORDENAMIENTO Menu(ORDENAMIENTO o) 
{
	short menu=0;
	do
	{
		cout << "Elija como desea ordenar  el array:" << endl;
		cout << "(1)Mayor a menor o (2)menor a mayor" << endl;
		cin >> menu;
	} while (!menu==1 || !menu==2);
	
	o = (ORDENAMIENTO)menu;
	return o;
};

void CrearArray(short m[],short t) 
{
	for (size_t i = 0; i < t; i++)
	{
		m[i] = rand() % 10 + 1;
	}
	MostrarArray(m,t);
};

void MostrarArray(short m[],short t) 
{
	for (size_t i = 0; i < t; i++)
	{
		cout << m[i] << ",";
	}
	cout << endl;
};

void OrdenarArreglo(short a[],short t,ORDENAMIENTO orde) 
{
	short aux = 0;
	switch (orde)
	{
	case ORDENAMIENTO::MAYOR:
		for (size_t i = 0; i < t; i++)
		{
			for (size_t j = i + 1; j < t; j++)
			{
				if (a[i] < a[j])
				{
					aux = a[i];
					a[i] = a[j];
					a[j] = aux;
				}
			}
		}
		break;
	case ORDENAMIENTO::MENOR:
		for (size_t i = 0; i < t; i++)
		{
			for (size_t j = i + 1; j < t; j++)
			{
				if (a[i] > a[j])
				{
					aux = a[i];
					a[i] = a[j];
					a[j] = aux;
				}
			}
		}
		break;
	default:
		break;
	}
	
	MostrarArray(a, t);
};*/
//Ejercicio #5
/*Crear un programa con una función que reciba un arreglo de chars y un carácter a
eliminar.
La función debe buscar y borrar los caracteres encontrados, corriendo el arreglo para
dejarlo sin espacios.*/
/*char CharAEliminar();
void EliminarChar(char m[],char);
void MostrarArray(char m[], short);

int main()
{
	char let = ' ';
	const short TAM = 45;
	char arreglo[TAM] = {"espero que revisen estas resoluciones!"};
	MostrarArray(arreglo,TAM);
	let = CharAEliminar();
	EliminarChar(arreglo,let);
	return 0;
};

void MostrarArray(char m[], short t)
{
	cout << m << endl;
};

char CharAEliminar() 
{
	char letra;
	do
	{
		cout << "Que char desea eliminar?" << endl;
		cin >> letra;
	} while (!letra>122 && !letra<97);
	return letra;
};

void EliminarChar(char m[],char l)
{
	short indice = 0;
	short aux = 0;
	while (m[indice] != '\0')
	{
		if (m[indice]==l)
		{
			aux = indice;
			while (m[aux]!='\0')
			{
				m[aux] = m[aux + 1];
				aux++;
			}
		}
		indice++;
	}
	MostrarArray(m, indice);
};*/