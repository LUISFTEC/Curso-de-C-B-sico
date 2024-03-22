#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string texto = "hola mundo";
    string texto1 = "10";
    string texto2 = "10.5";
    cout << texto<<endl;
    cout << stoi(texto1)+2<<endl;
    cout << stof(texto2)*2<<endl;
}