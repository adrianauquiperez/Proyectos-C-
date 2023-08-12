/*Crear la siguiente función plantilla:

T1 foo(T1 x, T2 y, T3& z)

La función debe retornar el producto de los primeros dos argumentos y establecer la variable z igual a x/y.	

Probar x con un int y  double.
					
*/

#include "iostream"

using namespace std;

template <typename T1, typename T2,typename T3>

T1 foo(T1 x,T2 y, T3& z){
    z = x/y;
    return x*y;
}
int main(){
    int x = 10;
    double y = 2.5;
    float z = 0;

    cout<<foo(x,y,z)<<endl;

    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;


}