#include "iostream"

using namespace std;

void FuncionA(string s1,string s2, string s3, string s4){
    string palabra = s1 + s2 + s3 + s4;
    string *palabra_ptr = &palabra;

    cout<<*palabra_ptr<<endl;
    
    delete palabra_ptr;
}

void FuncionB(string s1,string s2, string s3, string s4){

    string palabra1, palabra2, palabra3, palabra4, palabra5, palabra6;

    palabra1 = s1 + s2 + s3 + s4;
    palabra2 = s1 + s3 + s4 + s2;
    palabra3 = s1 + s4 + s2 + s3;
    palabra4 = s1 + s3 + s2 + s4;
    palabra5 = s1 + s4 + s3 + s2;
    palabra6 = s1 + s2 + s4 + s3; 

    string *p1 = &palabra1;
    string *p2 = &palabra2;
    string *p3 = &palabra3;
    string *p4 = &palabra4;
    string *p5 = &palabra5;
    string *p6 = &palabra6; 

    cout << *p1 << endl;  
    cout << *p2 << endl; 
    cout << *p3 << endl; 
    cout << *p4 << endl; 
    cout << *p5 << endl; 
    cout << *p6 << endl; 

    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
    delete p6;

    

}

void FuncionC(string s1,string s2, string s3, string s4){
    string palabra = s1 + s2 + s3 + s4;
    string *palabra_ptr = &palabra;

    string palabraInvertida = "";  
    string* palabraInvertida_ptr = &palabraInvertida; 

    for(int i = palabra.size() - 1 ; i > -1 ;i--){        
        *palabraInvertida_ptr = *palabraInvertida_ptr + (*palabra_ptr)[i];
    }

    cout<<*palabraInvertida_ptr<<endl;

    delete palabra_ptr;
    delete palabraInvertida_ptr;

}

int main(){
    FuncionA("ma","ma","ci","ta");
    cout<<endl;
    FuncionB("ma","ma","ci","ta");
    cout<<endl;
    FuncionC("ma","ma","ci","ta");

}