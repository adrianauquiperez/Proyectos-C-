/*Implemente un algoritmo que encuentre la moda en un array de números enteros no-negativos.*/

#include "iostream"
#include "vector"

using namespace std;

void ImprimirArray(vector<int> vec){
    for(int i= 0 ;i < vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

void Moda(vector<int> vec){
    vector<int> numeros_sin_repetir;
    vector<int> contador_repeticiones ;
    for(int i = 0;i<vec.size();i++){

        if(numeros_sin_repetir.size() == 0){
            numeros_sin_repetir.push_back(vec[i]);
            contador_repeticiones.push_back(1);
        }
        else{
            for(int j = 0;j<numeros_sin_repetir;j++){
                if(numeros_sin_repetir[j] == vec[i]){
                    contador_repeticiones[j] += 1;
                }
            }
        }

        
    }

    ImprimirArray(numeros_sin_repetir);
    ImprimirArray(contador_repeticiones);
}



int main(){
    vector<int> vector1;
    vector1.push_back(1);
    vector1.push_back(1);
    ImprimirArray(vector1);
    
}