#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
/*Ejercicio #1
Crear un programa que tenga un menC: (que no haga nada) mostrado mediante una
funciC3n. Debe repetirse hasta elegir salir.*/
/*void Menu ();

int
main ()
{
  Menu ();
  return 0;
}

void
Menu ()
{
  int menu = 0;
  do
    {
      cout << "Menu:\b(0)Salir" << endl;
      cin >> menu;
    }
  while (menu != 0);
};*/
/*Ejercicio #2
Crear un programa donde ingresamos nuestro HP y tengamos una constante de daC1o
de enemigo. Mediante una funciC3n recibiendo HP tenemos que indicar cuantos golpes
aguantamos antes de quedarnos sin vida.*/
/*short Ingresar(short h);
void Mostrar(short h);
void RecibiendoHp(short h);

const short danio=5;

int main()
{
    short hp=0;
    hp=Ingresar(hp);
    RecibiendoHp(hp);
}

short Ingresar(short h)
{
    cout<<"Ingrese el HP"<<endl;
    cin>>h;
    cout<<endl;
    Mostrar(h);
    cout<<" HP"<<endl;
    return h;
};

void Mostrar(short h)
{
    cout<<h;
};

void RecibiendoHp(short h)
{
    short golpes=0;
    while(h>0)
    {
    h=h- danio;
    golpes++;
    }
    Mostrar(golpes);
    cout<<" Golpes aguantados"<<endl;
};*/
/*Ejercicio #3
Crear un programa donde ingresamos un size y mediante una funciC3n que reciba ese
dato nos indique el tamaC1o de nuestro mapa (size al cuadrado).*/
/*short IngSize(short,double&);
short Mapa(short,double&);

int main()
{
    short size = 0;
    double mapa = 0.00;
    size = IngSize(size,mapa);
    cout <<"tamaño: "<<size<<" Mapa: "<<mapa;
};
short IngSize(short siz,double& map)
{
    cout << "Ingese el tamaño del mapa:" << endl;
    cin >> siz;
    Mapa(siz,map);
    return siz;
}
short Mapa(short siz,double& map)
{
    short potencia = 2;
    map = pow(siz,potencia);
    return siz;
}*/
/*Ejercicio #4
Crear un programa con un enum TIPO_ARMA (ESPADA, HACHA, MARTILLO) el cual
tenga una funciC3n que reciba el tipo de arma y muestre el nombre en pantalla.
Crear un arreglo de TIPO_ARMA con valores random y mostrar los nombres haciendo
uso de la funciC3n.*/
/*const short TAM = 10;
enum TIPO_ARMA {ESPADA=1,HACHA,MARTILLO}tipoArma;


void LlenarArreglo(TIPO_ARMA array[],short t);
void Mostrar(TIPO_ARMA);
short tiposArma(short);
void MostrarArreglo(TIPO_ARMA array[],short t);

int main() 
{
    srand(time(NULL));
    TIPO_ARMA arreglo[TAM];
    LlenarArreglo(arreglo,TAM);
    MostrarArreglo(arreglo, TAM);
}

void Mostrar(TIPO_ARMA mos,short con)
{
    cout << "[ "<<con <<"] ";
    switch (mos)
    {
    case ESPADA:
        cout << "Espada"<<endl;
        break;
    case HACHA:
        cout << "Hacha" << endl;
        break;
    case MARTILLO:
        cout << "Martillo" << endl;
        break;
    default:
        break;
    }
    
}
short tiposArma(short arm)
{
    arm = rand() % 3+1;
    cout <<"Random: " <<arm<<endl;
    return arm;
}

void LlenarArreglo(TIPO_ARMA array[],short t) 
{
    short aux=0;
    for (size_t i = 0; i < TAM; i++)
    {
        tipoArma = (TIPO_ARMA)tiposArma(aux);
        array[i] = tipoArma;
    }
};
void MostrarArreglo(TIPO_ARMA array[],short t) 
{
    short contar = 0;
    for (size_t i = 0; i < t; i++)
    {
        Mostrar(array[i],contar);
        contar++;
    }
};*/
/*Ejercicio #5
Definir un struct PERSONAJE compuesto por un TIPO_ARMA y HP.
Crear un arreglo de personajes con valores random y mediante una funciC3n que reciba
un personaje mostrar los datos de cada uno.*/
/*const short TAM = 10;
enum class TIPO_ARMA { EMPTY=0,ESPADA, HACHA, MARTILLO };
struct PERSONAJE
{
    TIPO_ARMA tipoArma= TIPO_ARMA::EMPTY;
    short hp=0;
}personaje;

void LlenarArreglo(PERSONAJE a[],short);
void MostrarArreglo(PERSONAJE a[], short s);
PERSONAJE CreacionPersonaje(PERSONAJE per);
void Mostrar(PERSONAJE pes, short con);

int main() 
{
    srand(time(NULL));
    PERSONAJE arreglo[TAM];
    LlenarArreglo(arreglo, TAM);
    MostrarArreglo(arreglo, TAM);
}

void LlenarArreglo(PERSONAJE a[], short s)
{

    for (size_t i = 0; i < s; i++)
    {
        a[i] = CreacionPersonaje(personaje);
    }
}

void MostrarArreglo(PERSONAJE a[], short s) 
{
    short conta = 0;
    for (size_t i = 0; i < TAM; i++)
    {
        Mostrar(a[i],conta);
        conta++;
    }
};

PERSONAJE CreacionPersonaje(PERSONAJE per)
{
    short arma = 0;
    short vida = 0;
    arma = rand() % 3 + 1;
    vida = rand() % 100 + 1;
    cout << "Random: " << arma <<", "<<vida<< endl;
    per.tipoArma = (TIPO_ARMA)arma;
    per.hp = vida;
    return per;
}

void Mostrar(PERSONAJE pes, short con)
{
    cout << "[ " << con << "] ";
    switch (pes.tipoArma)
    {
    case TIPO_ARMA::ESPADA:
        cout << "Espada ";
        break;
    case TIPO_ARMA::HACHA:
        cout << "Hacha ";
        break;
    case TIPO_ARMA::MARTILLO:
        cout << "Martillo ";
        break;
    default:
        break;
    }
    cout << " Hp:"<<pes.hp<<endl;
};*/
/*Ejercicio #6
1)Crear un struct POSICICN compuesto por 2 enteros (X,Y). 2)Ingresar 2 posiciones e 3)indicar
la distancia entre ambos puntos 4)haciendo uso de una funciC3n que reciba las posiciones.
Buscar cC3mo calcular la distancia.*/
/*
struct POSICION 
{
    short x = 0;
    short y = 0;
};

void IngresarPosiciones(POSICION& p1, POSICION& p2);
void CalcularDistancia(float);
void IndicarDistancia(POSICION p1, POSICION p2);

int main() 
{
    POSICION pos1;
    POSICION pos2;

    IngresarPosiciones(pos1, pos2);
    IndicarDistancia(pos1,pos2);
}

void IngresarPosiciones(POSICION& p1, POSICION& p2)
{

        cout << "Ingrse la Posicion(1) en X" << endl;
        //cin>>p1.x;
        p1.x = 10;
        p1.y = 10;
        cout << "Ingrse la Posicion(1) en Y" << endl;
        //cin >> p1.y;
        cout << "Ingrse la Posicion(2) en X" << endl;
        //cin >> p2.x;
        p2.x = 20;
        cout << "Ingrse la Posicion(2) en Y" << endl;
        //cin >> p2.y;
        p2.y = 20;

        system("PAUSE");
        system("CLS");
}
void IndicarDistancia(POSICION p1, POSICION p2)
{
    float dis=0.0f;
    dis=sqrtf(pow((p1.x - p2.x),2)+pow((p1.y - p2.y),2));
    CalcularDistancia(dis);
};
void CalcularDistancia(float d) 
{
    cout << "La distancia entre es " << d<<endl;
};*/
/*Ejercicio #7
Crear un programa donde se ingresen 2 valores numC)ricos y mediante una funciC3n que
los reciba nos retorne el valor mC!s grande.*/
/*void Ingresar();
void MasGrande(short,short);

int main() 
{
    Ingresar();
    return 0;
};

void Ingresar()
{
    short valor1, valor2;
    cout << "Ingrese valor(1)" << endl;
    cin >> valor1;
    cout << "\bIngrese valor(2)" << endl;
    cin >> valor2;
    MasGrande(valor1, valor2);
}
void MasGrande(short v1, short v2)
{
    if (v1 != v2) 
    {
        if (v1>v2)
        {
            cout << v1 << " es mayor " << v2;
        }
        else 
        {
            cout << v2 << " es mayor " << v1;
        }
    }
    else 
    {
        cout << v1<<" Son iguales "<<v2;
    }
}*/
/*Ejercicio #8
Crear una calculadora con las 1)operaciones bC!sicas (suma, resta, multiplicaciC3n y divisiC3n)
2)implementadas mediante funciones. 3)Crear un menC: que haga la operaciC3n indicada con
los datos ingresados por el usuario.*/
/*struct VALORES
{
    short valor1= 0;
    short valor2 = 0;
    short resultado = 0;
}valores;

void Menu();
void Ingresar(VALORES& v);
void Calculadora(char);
void Suma();
void Resta();
void Division();
void Multiplicacion();
void Mostrar(char);

int main() 
{
    Menu();
    return 0;
};

void Menu() 
{
    char simbolo = ' ';
    do
    {
        
        cout << "Que operacion desea ejecutar" << endl;
        
        do
        {
            cout << "coloque el simbolo: +(suma), -(resta), *(multiplicacion), /(division)" << endl;
            cin >> simbolo;
        } while (simbolo < 42 || simbolo > 47);
        
        Calculadora(simbolo);

        do
        {
            cout << "desea salir(y/n)?" << endl;
            cin >> simbolo;
        } while (simbolo != 110 && simbolo != 121);
        

    } while ( simbolo !=121);//funcion salir??
};

void Calculadora(char c)
{
    Ingresar(valores);
    switch (c)
    {
    case '+':
        Suma();
        break;
    case '-':
        Resta();
        break;
    case '*':
        Multiplicacion();
        break;
    case '/':
        Division();
        break;
    default:
        break;
    }
    Mostrar(c);
}

void Ingresar(VALORES& v)
{
    cout << "Ingrese 2 valores" << endl;
    cout << "valor 1 ";
    cin >> v.valor1;
    cout << "\bvalor 2 ";
    cin >> v.valor2;
};

void Suma() 
{
    valores.resultado=valores.valor1 + valores.valor2;
};

void Resta() 
{
    valores.resultado = valores.valor1 - valores.valor2;
};

void Division() 
{
    valores.resultado = valores.valor1 / valores.valor2;
};

void Multiplicacion() 
{
    valores.resultado = valores.valor1 * valores.valor2;
};

void Mostrar(char c) 
{
    cout << "El resultado de " << valores.valor1 << " " << c << " " << valores.valor2 << endl;
    cout << "Es " << valores.resultado<<endl;
};*/
/*Ejercicio #9
Haciendo uso nuevamente de nuestro 1)struct POSICICN y con 2)2 constantes de tamaC1o
largo y ancho, 3)crear una funciC3n que verifique que la posiciC3n ingresada sea vC!lida.
Hacer uso de la funciC3n como una condiciC3n para mostrar escrito si es vC!lida o no.*/
/*struct POSICION
{
    short x = 0;
    short y = 0;
};
const short LARGO = 2;
const short ANCHO = 2;

bool IngresarPosicion(bool);
bool VerificarPosicion(short, short);

int main()
{
    bool verdad = false;
    POSICION pos;
    POSICION matriz[LARGO][ANCHO];
    do
    {
        verdad=IngresarPosicion(verdad);
    } while (!verdad);
    
    return 0;
};

bool IngresarPosicion(bool ve) 
{
    short valor1, valor2;
    cout << "Ingrese un valor para X " << endl;
    cin >> valor1;
    cout << "Ingrese un valor para Y " << endl;
    cin >> valor2;
    ve=VerificarPosicion(valor1,valor2);
    return ve;
};

bool VerificarPosicion(short v1, short v2)
{
    bool ver1 = false;
    if (v1 < 0 || v1 >= LARGO) 
    {
        cout << "X no esta contenido"<<endl;
    }
    else
    {
        cout << "El valor es correcto en X"<<endl;
        ver1 = true;
    }
    if (v2 < 0 || v2 >= ANCHO)
    {
        cout << "Y no esta contenido" << endl;
        ver1 = false;
    }
    else
    {
        cout << "El valor es correcto en Y" << endl;
    }
        return ver1;
};*/
//Ejercicio #10
/*1)Crear una funciC3n para validar el input ingresado, 2)indicando el valor minimo y maximo posible.
3)Probarla en un loop de menC:.*/
/*void Ingresar(short,short);
void Menu(short);

int main()
{
    short valorMax = 2;
    short valorMin = 0;
    Ingresar(valorMin,valorMax);
    return 0;
};

void Ingresar(short vMin, short vMax) 
{
    cout << "1)Jugar,2)Salir" << endl;
    short valor = 0;
    do
    {
        cout << "Ingrese un valor del menu:" << endl;
        cin >> valor;
    } while (valor <= vMin || valor > vMax);
    Menu(valor);
};

void Menu(short val) 
{
    switch (val)
    {
    case 1:
        cout << "1)Jugar"<<endl;
        system("PAUSE");
        break;
    case 2:
        cout << "2)Salir";
        break;
    default:
        break;
    }
};*/
//Ejercicio #11
/*Similar al anterior, solo que en este caso sea una confirmaciC3n para salir (y/n) y devuelva
un bool.*/
/*void Ingresar(short, short);
void Menu(short);

int main()
{
    short valorMax = 2;
    short valorMin = 0;
    Ingresar(valorMin, valorMax);
    return 0;
};

void Ingresar(short vMin, short vMax)
{
    cout << "1)Jugar,2)Salir" << endl;
    short valor;
    do
    {
        valor = 0;
        cout << "Ingrese un valor del menu:" << endl;
        cin >> valor;
    } while (valor <= vMin || valor > vMax);
    Menu(valor);
};

void Menu(short val)
{
    bool salir = false;
    do
    {
        char salida = ' ';
        switch (val)
        {
        case 1:
            cout << "1)Jugar" << endl;
            system("PAUSE");
            break;
        case 2:
            do
            {
                cout << "2)Salir(y/n)" << endl;
                cin >> salida;
            } while (salida != 'y');
            salir = true;
            break;
        default:
            break;
        }
    } while (!salir);
};*/

