#include <iostream>
using namespace std;

int suma(int a, int b){
    return a + b;
}

int resta(int a, int b){
    return a - b;
}

int multiplicacion (int a, int b){
    return a * b;
}

int division (int a, int b){
    return a / b;
}

int main(){
cout<<suma(4, 5)<<endl;
cout<<multiplicacion(4, 5)<<endl;
cout<<resta(4, 5)<<endl;
cout<<division(4, 5);
}