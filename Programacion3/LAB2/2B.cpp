/*Implemente un algoritmo que encuentre la moda en un array de números enteros no-negativos. 

Implemente la clase Numeros, que utilice el constructor para crear un array de 20 números enteros aleatorios de una cifra. Luego crear un método para encontrar la moda y otro para imprimir el array. */

#include "iostream"
#include "vector"

using namespace std;
#include "iostream"
#include "vector"

using namespace std;

vector<int> ArraySinRepetir(vector<int> vec){
    vector<int> vectorSinRepetir;
    for(int i : vec){
        if(vectorSinRepetir.empty()){
            vectorSinRepetir.push_back(i);
        }

        else{
            int cont = 0 ;
            for(int j: vectorSinRepetir){

                if(i == j){
                    cont += 1;
                }
            }

            if(cont == 0){
                vectorSinRepetir.push_back(i);
            }
        }

    }
    return vectorSinRepetir;
}

void Moda(vector<int> vec){
    vector<int> vec_sin_repetir = ArraySinRepetir(vec);
    vector<int> vec_cont;
    int contadorMax= 0;
    int indiceMax = 0;

    for(int i = 0;i<vec_sin_repetir.size();i++){
        int contador = 0;
        for(int j = 0;j<vec.size();j++){
            if(vec_sin_repetir[i] == vec[j]){
                contador += 1;
            }
        }
        if(contador > contadorMax){
            contadorMax = contador;
            indiceMax = i;
        }
    }
    cout<<"La moda es: "<<vec_sin_repetir[indiceMax];
}

class Numeros{
private:
    vector<int> vec;
public:
    Numeros(){
        srand(time(NULL));
        for(int i = 0;i<20;i++){
            vec.push_back(rand() % 10);
        }
    }

    int moda(){
        vector<int> vectorSinRepetir;
        for(int i : vec){
            if(vectorSinRepetir.empty()){
                vectorSinRepetir.push_back(i);
            }

            else{
                int cont = 0 ;
                for(int j: vectorSinRepetir){

                    if(i == j){
                        cont += 1;
                    }
                }

                if(cont == 0){
                    vectorSinRepetir.push_back(i);
                }
            }
        }

        vector<int> vec_cont;
        int contadorMax= 0;
        int indiceMax = 0;

        for(int i = 0;i<vectorSinRepetir.size();i++){
            int contador = 0;
            for(int j = 0;j<vec.size();j++){
                if(vectorSinRepetir[i] == vec[j]){
                    contador += 1;
                }
            }
            if(contador > contadorMax){
                contadorMax = contador;
                indiceMax = i;
            }
        }
        return vectorSinRepetir[indiceMax];
    }

    void Imprimir(){
        for(int i : vec){
            cout<<i<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Numeros num1;

    num1.Imprimir();
    cout<<"La moda es: "<<num1.moda();

}