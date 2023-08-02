#include "iostream"

using namespace std;

void FuncionA(string s1,string s2, string s3, string s4){
    cout<< s1 + s2 + s3 + s4<<endl;
}

void FuncionB(string s1,string s2, string s3, string s4){

    cout<<s1 + s2 + s3 + s4<<endl;
    cout<<s1 + s3 + s4 + s2<<endl;
    cout<<s1 + s4 + s2 + s3<<endl;
    cout<<s1 + s3 + s2 + s4<<endl;
    cout<<s1 + s4 + s3 + s2<<endl;
    cout<<s1 + s2 + s4 + s3<<endl;    

}

void FuncionC(string s1,string s2, string s3, string s4){
    string palabra = s1 + s2 + s3 + s4;
    string palabraInvertida = "";   

    for(int i = palabra.size() ; i > -1 ;i--){        
        palabraInvertida += palabra[i];
    }

    cout<<palabraInvertida<<endl;
}

int main(){
    FuncionA("ma","ma","ci","ta");
    cout<<endl;
    FuncionB("ma","ma","ci","ta");
    cout<<endl;
    FuncionC("ma","ma","ci","ta");

}