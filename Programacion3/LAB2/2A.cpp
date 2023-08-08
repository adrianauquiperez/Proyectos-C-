/*Implemente un algoritmo que encuentre la moda en un array de números enteros no-negativos.*/

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

int main(){
    vector<int> vector1 = {1,2,2,2,2,2,2,2,2,2,2,2,1,3,4,1,1,1};

    Moda(vector1);
}