/*La tabla de caracteres ASCII asigna a cada caracter de 8 bits un código
desde el 0 hasta el 255, a este código se conoce como código ASCII.
Si realizamos el typecasting de un char a int podremos verificar que
por ejemplo la letra ‘A’ tiene código ASCII 65 o que la ñ tiene código
ASCII 164.
Escribir un programa que lea un texto y haciendo uso de un vector
contar las veces que se repita cada carácter del texto que se ha leído.
Ejercicio 1
*/

#include "iostream"
#include "vector"
#include "string"

using namespace std;

bool estaEnVector(char x,vector<char> vec){
    if(vec.size() == 0){
        return false;
    }

    for(int i = 0;i<vec.size();i++){
        if(vec[i] == x){
            return true;
        }
    }

    return false;
}

int main(){
    string texto;
    vector<char> letras_vec;

    cout<<"Insertar Texto: ";getline(cin,texto);

    for(int i = 0 ;i < texto.size();i++){
        if(!estaEnVector(texto[i],letras_vec)){
            letras_vec.push_back(texto[i]);
        }
    }
    
    for(int j = 0;j < letras_vec.size();j++){
        int contador = 0;

        cout<<letras_vec[j]<<" : ";

        for(int h = 0;h < texto.size();h++){
            if(letras_vec[j] == texto[h]){
                contador += 1;
            }
        }

        cout<<contador<<endl;
    }
}