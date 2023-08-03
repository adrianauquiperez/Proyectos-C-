#include "iostream"

using namespace std;

class CUsuario{
private:
    string usuario;
    string contraseña;
    int edad;
    string correo;
    char genero;

public:

    CUsuario(){}
    CUsuario(string _usuario, string _contraseña, int _edad, string _correo , char _genero){
        usuario = _usuario;
        contraseña = _contraseña;
        edad = _edad;
        correo = _correo;
        genero = _genero;
    }

    void imprimirInformacion(){
        cout<<"Usuario: "<<usuario<<endl;
        cout<<"Contraseña: "<<contraseña<<endl;
        cout<<"Edad: "<<edad<<endl;
        cout<<"Correo: "<<correo<<endl;
        cout<<"Genero: "<<genero<<endl;        
    }

    void cambiarContraseña(string nuevaContraseña){
        contraseña = nuevaContraseña;
    }
    
};

int main(){

    CUsuario U1("Adrian","hola",19,"adrian.auqui@utec.edu.pe",'m');
    U1.imprimirInformacion();
    U1.cambiarContraseña("HOLA2");
    U1.imprimirInformacion();
    

}