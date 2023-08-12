#include "iostream"

using namespace std;

class ArrayCircular{
private:
    int delantera;
    int trasera;
    int tamaño;
    int *array;

    bool estaLlena(){
        return (trasera+1) % tamaño == delantera;
    }

    bool estaVacia(){
        return trasera == -1 && delantera == -1;
    }

public:
    ArrayCircular(int _tamaño){
        this->tamaño = _tamaño;
        this->delantera = -1;
        this->trasera = -1;
        this->array = new int[_tamaño];
    }



    void Agregar(int x){
        if(estaLlena()){
            cout<<"El array esta lleno"<<endl;
        }

        else if(estaVacia()){
            trasera = delantera = 0;
        }
        else{
           trasera+= 1;
        }

        array[trasera] = x;
    }

    void ImprimirArray(){
        for(int i = delantera;i<=trasera;i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }

    void Eliminar(){
        if(estaVacia()){
            cout<<"El array esta vacio"<<endl;
        }
        else if(trasera == delantera){
            trasera = delantera = -1;
        }
        else{
            delantera += 1;
        }
    }


};

int main(){
    ArrayCircular a1(4);

    a1.Agregar(10);
    a1.ImprimirArray();

    a1.Agregar(20);
    a1.ImprimirArray();

    a1.Agregar(30);
    a1.ImprimirArray();

    a1.Eliminar();
    a1.ImprimirArray();


    a1.Agregar(50);
    a1.ImprimirArray();

    a1.Agregar(60);
    a1.ImprimirArray();


}