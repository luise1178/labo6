#include <iostream>
using namespace std;
int main(){
    int numero, suma=0, contador=0;
    cout <<"Ingrese numero"<< endl;
    cin >> numero;
    for(int i=1; i<=numero; i++){
        if( i % 2 !=0){
            suma=suma+i;
        contador++;
        }
        
        
    }
  cout <<"La suma de los imapares es:"<<suma<<endl;
        cout<<"La cantidad de numeros impares es:"<<contador<<endl;
    














return 0;
}