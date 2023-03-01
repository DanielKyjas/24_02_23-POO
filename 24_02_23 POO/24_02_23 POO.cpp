// 24_02_23 POO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

class Atleta // Definicion de la clase
{
    //Atributos
    int energia;
    int fuerza;
    int velocidad;
    char complexion[15];
    char nombre[15];

    //Constructores
    //Constructor generico
public:
    Atleta()
    {
        energia = 100;
        fuerza = 50;
        velocidad = 80;
        strcpy_s(complexion, "Normal");
        strcpy_s(nombre, "Desconocido");
    }
    //Constructor especifico
    Atleta(int e, int f, int v, char c[15], char n[15])
    {
        energia = e;
        fuerza = f;
        velocidad = v;
        strcpy_s(complexion, c);
        strcpy_s(nombre, n);
    }
    //Destructor
    ~Atleta()
    {
        cout << "Atleta: " << nombre << " destruido" << endl;
    }
    //Metodos   
    void correr()
    {
            velocidad++;
            energia--;
    }
    void mostrar()
    {
        cout << "Energia: " << energia << endl;
        cout << "Fuerza: " << fuerza << endl;
        cout << "Velocidad: " << velocidad << endl;
        cout << "Complexion: " << complexion << "\n" << endl;
        cout << "Nombre: " << nombre << "\n" << endl;

    }
    int getvelocidad()
    {
        return velocidad;
    }
    void setvelocidad(int v)
    {
        velocidad = 50;
    }
    int getfuerza()
    {
        return fuerza;
    }
    void setfuerza(int f)
    {
        fuerza = 40;
    }
    
    int getenergia()
    {
        return energia;
    }
    void setenergia(int e)
    {
        energia = 100;
    }
    char* getcomplexion()
    {
        return complexion; 
    }
    void setvcomplexion(char c[15])
    {
        strcpy_s(complexion, c);
    }
    char* getnombre()
    {
        return nombre;
    }
    void setnombre(char n[15])
    {
        strcpy_s(nombre, n);
    }
};

int main()
{
    Atleta Desconocido;
    Desconocido.mostrar();
    char auxiliar[15];
    strcpy_s(auxiliar, "Messi");
    char auxiliarC[15];
    strcpy_s(auxiliarC, "Chaparro");
    Atleta Messi(200, 100, 500, auxiliarC, auxiliar);
    Messi.mostrar();

    char AuxD[15];
    char AuxDC[15];
    strcpy_s(AuxD, "Chabelo");
    strcpy_s(AuxDC, "Fuerte");
    Desconocido.setnombre(AuxD);
    Desconocido.setvcomplexion(AuxDC);
    Desconocido.setenergia(100);
    Desconocido.setfuerza(300);
    Desconocido.setvelocidad(50);
    Desconocido.mostrar();


    char AuxM[15];
    char AuxMC[15];
    strcpy_s(AuxM, "Phelps");
    strcpy_s(AuxMC, "fuerte");

    Atleta* Phelps = new Atleta(100, 100, 150, AuxMC, AuxM);
    Phelps->mostrar();
    delete Phelps;

    
}

