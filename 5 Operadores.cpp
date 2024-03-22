#include<iostream>
using namespace std;
    
int main(){
    int a = 2;
    int b = 4;
    int suma  = a + b;
    int resta  = a - b;
    bool menor = a > b;
    a+= 1;
    int edades[] = {24, 40, 7, 55, 54};

    cout<<suma<<endl;
    cout<<resta<<endl;
    cout<<menor<<endl;
    cout<<sizeof(a)<<endl;
    cout <<sizeof(edades) / sizeof(edades[0])<<endl;
    cout <<sizeof(edades) / sizeof(int);
}




