#include <iostream>

using namespace std;

int main(){
    int edad = 0;
    edad= 18;
    const char letra = 'A';

    int lista_edades[] = {18, 19, 20, 22, 25};
    lista_edades[4]= 30;

    cout<<edad<<endl;
    cout<<letra<<endl;
    cout<<lista_edades[4];

    return 0;
}