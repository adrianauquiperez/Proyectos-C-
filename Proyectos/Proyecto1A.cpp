#include "iostream"

using namespace std;

float HiloTotalJersey(int polosJersey,int camisasJersey){
    float TelaRequerida = polosJersey * 0.2 + camisasJersey * 0.5;

    return TelaRequerida / 0.7;
}

float TiempoJersey(int polosJersey,int camisasJersey){
    float TelaRequerida = polosJersey * 0.2 + camisasJersey * 0.5;
    
    return TelaRequerida * + TelaRequerida/10 + TelaRequerida/20 + TelaRequerida/0.3;

}



float GananciaJersey(float HiloTotalJersey,int polosJersey,int camisasJersey){
    return (polosJersey*30 + camisasJersey*50) - HiloTotalJersey*10;
}

void PedidoJersey(int polosJersey,int camisasJersey){
    cout<<"Jersey--------------------------"<<endl;
    cout<<endl;
    cout<<"Polos: ";cin>>polosJersey;
    cout<<"Camisas: ";cin>>camisasJersey;
    cout<<endl;    
    cout<<"Tiempo Requerido: "<<TiempoJersey(polosJersey,camisasJersey)<<" horas"<<endl;
    cout<<"Ganancia: "<<GananciaJersey(HiloTotalJersey(polosJersey,camisasJersey),polosJersey,camisasJersey)<<" soles"<<endl;
    cout<<endl;
    cout<<"--------------------------------"<<endl;
}


float HiloTotalFranela(int polosFranela,int camisasFranela){
    float TelaRequerida = polosFranela * 0.5 + camisasFranela * 1;

    return TelaRequerida / 0.3;
}

float TiempoFranela(int polosFranela,int camisasFranela){
    float TelaRequerida = polosFranela * 0.5 + camisasFranela * 1;
    
    return TelaRequerida * + TelaRequerida/10 + TelaRequerida/20 + TelaRequerida/0.5;

}

float GananciaFranela(float HiloTotalFranela,int polosFranela,int camisasFranela){
    return (polosFranela*60 + camisasFranela*80) - HiloTotalFranela*10;
}

void PedidoFranela(int polosFranela,int camisasFranela){
    cout<<"Franela-------------------------"<<endl;
    cout<<endl;
    cout<<"Polos: ";cin>>polosFranela;
    cout<<"Camisas: ";cin>>camisasFranela;
    cout<<endl;    
    cout<<"Tiempo Requerido: "<<TiempoFranela(polosFranela,camisasFranela)<<" horas"<<endl;
    cout<<"Ganancia: "<<GananciaFranela(HiloTotalFranela(polosFranela,camisasFranela),polosFranela,camisasFranela)<<" soles"<<endl;
    cout<<endl;
    cout<<"--------------------------------"<<endl;
}


int main(){
    int polosJersey,camisasJersey;
    int polosFranela,camisasFranela;
    int* polosJersey_ptr = &polosJersey;
    int* camisasJersey_ptr = &camisasJersey;
    int* polosFranela_ptr = &polosFranela;
    int* camisasFranela_ptr = &camisasFranela;

    PedidoFranela(*polosFranela_ptr,*camisasFranela_ptr);
    PedidoJersey(*polosJersey_ptr,*camisasJersey_ptr);

    delete polosFranela_ptr;
    delete camisasFranela_ptr;
    delete polosJersey_ptr;
    delete camisasJersey_ptr;
    polosFranela_ptr = nullptr;
    camisasFranela_ptr = nullptr;
    polosJersey_ptr = nullptr;
    camisasJersey_ptr = nullptr;
    


    


}