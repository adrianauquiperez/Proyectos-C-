#include "iostream"
#include "cmath"

using namespace std;

int main(){
    double a,b,c,raiz1,raiz2;

    cout<<"aX^2 + bX + c"<<endl;
    cout<<endl;
    cout<<"a: ";cin>>a;
    cout<<"b: ";cin>>b;
    cout<<"c: ";cin>>c;

    cout<<endl;

    raiz1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    raiz1 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
    
    if (raiz1 > raiz2){
        cout<<"La raiz mayor es "<<raiz1;
    }
    else if (raiz1 < raiz2){
        cout<<"La raiz mayor es "<<raiz2;
    }
    else{
        cout<<"Es imaginario";
    }

}