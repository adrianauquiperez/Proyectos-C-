/*Escriba un código en C++ que permita calcular el precio de un auto con las siguientes propiedades:

- marca (VW, Porsche, Jeep)

- velocidad máxima (200, 250 o 300 Kph)

- alarma (existente o no)

- cantidad de puertas (2 o 4)

Se indican entre paréntesis ejemplos de valores posibles. Los valores deben ser ingresados como input.

El cálculo del precio final del auto se debe hacer siguiendo estas 4 instrucciones:

a - multiplicando la velocidad máxima por 50

b - multiplicando este resultado por la cantidad de puertas

c - si el auto es Volkswagen, añada 5000 al precio

d - si el auto es Porsche, multiplique por 2, y si es Jeep , por 20

Un coleccionista quiere comprar varios autos (se pregunta la cantidad). Realice el cálculo de sus precios y genere una tabla que muestre las características de cada auto y sus precios individuales, así como la suma total de sus precios.

Utilice los formatos de impresión practicados en clase y otros con los que pueda mejorar la tabla final. Puede revisar la librería iomanip en los siguientes links:

https://www.cplusplus.com/reference/iomanip/ (Enlaces a un sitio externo.)

https://en.cppreference.com/w/cpp/header/iomanip

Utilice funciones para que el main() sea la menor cantidad de lineas de codigo posibles.*/


#include "iostream"
#include "iomanip"

using namespace std;

int main(){
    int cantidadAutos;    

    cout<<"Cantidad de autos a comprar: ";cin>>cantidadAutos;

    string listaMarca[cantidadAutos];
    int listaVelocidadMaxima[cantidadAutos];
    string listaAlarma[cantidadAutos];
    int listaCantidadPuertas[cantidadAutos];
    double listaPrecio[cantidadAutos];

    for(int i = 0;i<cantidadAutos;i++){
        string marca;
        int velocidadMaxima;
        string alarma;
        int cantidadPuertas;
        double precio;

        cout<<"---------------------------------------------------------"<<endl;
        cout<<"Auto "<<i+1<<endl;
        cout<<endl;
        cout<<"Marca (VW, Porsche, Jeep): ";cin>>marca;
        cout<<"Velocidad Maxima (200, 250 o 300 Kph): ";cin>>velocidadMaxima;
        cout<<"Alarma (si/no): ";cin>>alarma;
        cout<<"Cantidad de puertas (2/4): ";cin>>cantidadPuertas;        

        precio = velocidadMaxima * 50;
        precio *= cantidadPuertas;

        if(marca == "Volkswagen"){
            precio += 5000;
        }

        if(marca == "Porsche"){
            precio *= 2;
        }

        if(marca == "Jeep "){
            precio *= 20;
        }


        listaMarca[i] = marca;
        listaVelocidadMaxima[i] = velocidadMaxima;
        listaAlarma[i] = alarma;
        listaCantidadPuertas[i] = cantidadPuertas;  
        listaPrecio[i] = precio;   

    }

    cout<<left<<setw(30)<<"ID";
    cout<<left<<setw(30)<<"Marca";
    cout<<left<<setw(30)<<"Velocidad_Maxima";
    cout<<left<<setw(30)<<"Alarma";
    cout<<left<<setw(30)<<"Cantidad_de_Puertas";
    cout<<left<<setw(30)<<"Precio";
    cout<<endl;

    for(int j = 0;j < cantidadAutos;j++){
        cout<<left<<setw(30)<<j+1;
        cout<<left<<setw(30)<<listaMarca[j];
        cout<<left<<setw(30)<<listaVelocidadMaxima[j];
        cout<<left<<setw(30)<<listaAlarma[j];
        cout<<left<<setw(30)<<listaCantidadPuertas[j];
        cout<<left<<setw(30)<<listaPrecio[j];
        cout<<endl;
        
    }



    



}