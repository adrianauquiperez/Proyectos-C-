#include "iostream"
#include "random"

using namespace std;

int main(){
      
    int a,b;

    cout<<"a: ";cin>>a;
    cout<<"b: ";cin>>b;
    cout<<endl;

    int** matrix = new int*[a];

    for(int i = 0;i<a;i++){
        matrix[i] = new int[b];
        for(int j = 0;j<b;j++){
            matrix[i][j] = rand() % 10;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}