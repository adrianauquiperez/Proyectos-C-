/*Implemente un programa que permita leer un número de 7 dígitos y retorne la suma de los dígitos.
*/

#include "iostream"
#include "string"

using namespace std;

int SumaDigitos(int numero){
    string numero_str = to_string(numero);
    int suma = 0;

    for(char i : numero_str){
        suma += i - '0';
    }

    return suma;
}

int main(){
    cout<<"La suma de los digitos es: "<<SumaDigitos(1234567);
}