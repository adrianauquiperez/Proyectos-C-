/*Escriba un código que permita ingresar una clave consistente en 0s y 1s (número binario). La clave debe tener la cantidad de dígitos que el usuario ingrese como input.

Ahora, el código debe encontrar una llave que corresponda a la clave creada. Esta tendrá mayor cantidad de dígitos que la clave original, y contendrá la secuencia 'aba' si la clave tiene un 0, o la secuencia 'bab' si la clave tiene un 1. Por ejemplo, si la clave ingresada es 10101101 ,  la llave será bab aba bab aba bab bab aba bab (los espacios solo se incluyen para entender bien el ejemplo, no necesita incluirlos en el código)

Al culminar, el código debe imprimir la clave y llave generadas.*/

#include "iostream"

using namespace std;

string Llave(int clave){
    int digito;
    string llave = "";
    while(clave > 0){
        digito = clave % 10;
        clave = clave / 10;

        if(digito == 0){
            llave = "aba" + llave;
        }

        if(digito == 1){
            llave = "bab" + llave;
        }
    }

    return llave;
}

int main(){
    int clave;
    string llave;

    cout<<"Clave: ";cin>>clave;
    cout<<"LLave: "<<Llave(clave);


}