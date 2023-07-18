#include "iostream"

using namespace std;

int main(){
    int num1,num2,num3;
    int* pnum1;
    int* pnum2;
    int* pnum3;
    int option;

    while (true)
    {
        cout<<"Menu"<<endl;
        cout<<"1) Addition"<<endl;
        cout<<"2) Subtraction"<<endl;
        cout<<"3) Multiply"<<endl;
        cout<<"4) Divide"<<endl;
        cout<<"5) Go out"<<endl;
        cout<<"Select your operation(1 - 4): ";cin>>option;
        cout<<"------------------------------------------------"<<endl;

        if(option == 1){
            cout<<"Number 1: ";cin>>num1;
            cout<<"Number 2: ";cin>>num2;

            pnum1 = &num1;
            pnum2 = &num2;
            
            num3 = *pnum1 + *pnum2;
            pnum3 = &num3;
            
            cout<<"The solution is "<<*pnum3<<endl;
            cout<<endl;
            cout<<"------------------------------------------------"<<endl;
        }

        if(option == 2){
            cout<<"Number 1: ";cin>>num1;
            cout<<"Number 2: ";cin>>num2;

            pnum1 = &num1;
            pnum2 = &num2;
            
            num3 = *pnum1 - *pnum2;
            pnum3 = &num3;
            
            cout<<"The solution is "<<*pnum3<<endl;
            cout<<endl;
            cout<<"------------------------------------------------"<<endl;
        }

        if(option == 3){
            cout<<"Number 1: ";cin>>num1;
            cout<<"Number 2: ";cin>>num2;

            pnum1 = &num1;
            pnum2 = &num2;
            
            num3 = *pnum1 * *pnum2;
            pnum3 = &num3;
            
            cout<<"The solution is "<<*pnum3<<endl;
            cout<<endl;
            cout<<"------------------------------------------------"<<endl;
        }

        if(option == 4){
            cout<<"Number 1: ";cin>>num1;
            cout<<"Number 2: ";cin>>num2;

            pnum1 = &num1;
            pnum2 = &num2;
            
            num3 = *pnum1 / *pnum2;
            pnum3 = &num3;
            
            cout<<"The solution is "<<*pnum3<<endl;
            cout<<endl;
            cout<<"------------------------------------------------"<<endl;
        }

        if(option == 5){
            cout<<"Thanks for your visit :)"<<endl;
            cout<<endl;
            cout<<"------------------------------------------------"<<endl;
            break;            
        }

        if(option > 5){
            cout<<"This number is out of range.Try again"<<endl;
            cout<<endl;
            cout<<"------------------------------------------------"<<endl;
        }

        pnum1 = nullptr;
        pnum2 = nullptr;
        pnum3 = nullptr;

    }    
}