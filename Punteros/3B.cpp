#include "iostream"

using namespace std;



void Acciones_A_X(double &capital_A_X,double &capital_final_X){
    capital_A_X = capital_A_X + (0.07 * capital_A_X);
    capital_final_X = capital_final_X - (0.07 * capital_A_X);
}

void Acciones_A_Y(double &capital_A_Y,double &capital_final_Y){
    capital_A_Y = capital_A_Y + (0.02 * capital_A_Y);
    capital_final_Y = capital_final_Y - (0.02 * capital_A_Y);
}

void Acciones_B_X(double &capital_B_X,double &capital_final_X){
    capital_B_X = capital_B_X + (0.01 * capital_B_X);
    capital_final_X = capital_final_X - (0.01 * capital_B_X);
}

void Acciones_B_Y(double &capital_B_Y,double &capital_final_Y){
    capital_B_Y = capital_B_Y + (0.06 * capital_B_Y);
    capital_final_Y = capital_final_Y - (0.06 * capital_B_Y);
}

void Imprimir_Total(double* capital_A_X,double* capital_A_Y,double* &capital_B_X,double* &capital_B_Y,double* &capital_final_X,double* &capital_final_Y){
    int i = 1;
    while (i != 0) {


        Acciones_A_X(*capital_A_X, *capital_final_X);
        Acciones_B_X(*capital_B_X, *capital_final_X);

        Acciones_A_Y(*capital_A_Y, *capital_final_Y);
        Acciones_B_Y(*capital_B_Y, *capital_final_Y);

        if (*capital_final_Y <= 0 and *capital_final_X <= 0) {
            cout << "Capital Final" << endl;
            cout << endl;
            cout << "Empresa A" << endl;
            cout << "Acciones X : " << *capital_A_X << endl;
            cout << "Acciones Y : " << *capital_A_Y << endl;
            cout << endl;
            cout << "Empresa B" << endl;
            cout << "Acciones X : " << *capital_B_X << endl;
            cout << "Acciones Y : " << *capital_B_X << endl;
Instructor
| 05/15 at 4:16 pm
Comentario de la calificación:
debe ser B_Y

            break;
        }
    }


}
int main(){
    double * capital_A_X = new double;
    *capital_A_X = 100;
    double * capital_A_Y = new double;
    *capital_A_Y = 100;

    double * capital_B_X = new double;
    * capital_B_X = 100;
    double * capital_B_Y = new double;
    * capital_B_Y = 100;

    double * capital_final_X = new double;
    * capital_final_X = 1000;
    double  * capital_final_Y = new double;
    * capital_final_Y = 1000;

    Imprimir_Total(capital_A_X, capital_A_Y,capital_B_X,capital_B_Y,capital_final_X,capital_final_Y);

}


