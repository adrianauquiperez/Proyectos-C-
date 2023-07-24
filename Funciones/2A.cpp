 /* 
Desarrolle un código que permita actualizar la cuenta en un banco
El código debe realizar lo siguiente:

1. Ingresar el monto a depositar o retirar, a través de un menú, y hacer la actualización
2. Ahora permita solo depositar o retirar hasta un total de 3000 soles
3. Ahora permita depositar o retirar un máximo de 5 veces
4. Debe imprimir como resultado el saldo inicial y final, así como la cantidad de transacciones realizadas 

Notas:

El código debe ser eficiente. Debe tener un numero mínimo de instrucciones (líneas de código)
Las entradas de codigo (input) deben estar claramente especificadas
El estudiante decide el formato de salidas de código (output)
Considere la rúbrica del ejercicio (en Canvas)*/

#include "iostream"

using namespace std;

int main(){
    int opcion,contador = 0;
    float dineroTotal_Inicial = 1000,dineroTotal_Final = dineroTotal_Inicial,dineroDepositar,dineroRetirar; 

    while(contador < 6){
        
        cout<<"Menu----------"<<endl;
        cout<<"1) Depositar"<<endl;
        cout<<"2) Retirar"<<endl;
        cout<<"3) Salir"<<endl;
        cout<<"Opcion a elegir: ";cin>>opcion;
        cout<<"--------------"<<endl;

        if(opcion == 1){

            do{
                cout<<"Monto a depositar: ";cin>>dineroDepositar; 
            }while(dineroDepositar > 3000   ||  dineroDepositar < 0);  

            dineroTotal_Final += dineroDepositar;                    
            contador += 1;            
        }

        if(opcion == 2){

            do{
                cout<<"Monto a retirar: ";cin>>dineroRetirar;
            } while (dineroRetirar > 3000   ||  dineroRetirar < 0  ||  dineroRetirar > dineroTotal_Final);

            dineroTotal_Final -= dineroRetirar;         
            contador += 1;      
        }

        if(opcion == 3  || contador > 5){
            cout<<"--------------"<<endl;
            cout<<"Monto inicial: "<<dineroTotal_Inicial<<endl;
            cout<<"Monto Final: "<<dineroTotal_Final<<endl;
            cout<<"Cantidad de Transacciones: "<<contador<<endl;
            cout<<"--------------"<<endl;
            break;
        }       
    }
}