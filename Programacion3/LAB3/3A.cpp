/*mplemente el juego del ahorcado con las siguientes condiciones:

Empezar mostrando la cantidad de letras que tiene el verbo.
El jugador debe tener al menos cinco intentos. Cada letra que acierte en el jugador, debe ser revelada.
Escoger un verbo de manera aleatoria del siguiente archivo.

*/

#include "iostream"
#include "fstream"
#include "vector"
#include "string"


using namespace std;

bool Ganar(string palabra){
    int cont =0 ;
    for(char letra : palabra){
        if(letra == '_'){
            cont += 1;
        }
    }

    return cont == 0;
}

void Ahorcados(vector<string> vec){
    string palabra = vec[rand() % vec.size()];
    string palabra_incognito;

    for(int i = 0;i<palabra.size();i++){
        palabra_incognito += '_';
    }
    int vidas = 5;
    int acertados = 0;
    while(true){
        int cont = 0;
        char letra;

        if(vidas == 0){
            cout<<"Tus vidas se han acabado :(("<<endl;
            break;
        }

        if(Ganar(palabra_incognito)){
            cout<<"Ganaste el juego :DDD"<<endl;
            break;
        }


        cout<<palabra_incognito<<endl;
        cout<<palabra<<endl;
        cout<<"Introducir Letra: ";cin>>letra;

        for(int i = 0;i<palabra.size();i++){
            if(palabra[i] == letra){
                palabra_incognito[i] = letra;
                acertados += 1;
                cont -= 1;
            }
            cont += 1;
        }

        if(cont == palabra.size()){
            vidas -= 1;
        }




    }


}

int main(){
    srand(time(NULL));
    ifstream archivo_txt("verbos.txt");
    string line;
    vector<string> verbos_vec;

    if(archivo_txt.is_open()){
        while(getline(archivo_txt,line)){
            verbos_vec.push_back(line);
        }
    }



    Ahorcados(verbos_vec);



}