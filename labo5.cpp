#include <iostream>
using namespace std; 


int main() {

    float radio, lado, base, altura;
    int opcion;
    cout << "Bienvenido/a eliga las siguientes operaciones:" << endl;
    cout << "1. Circulo" << endl;
    cout << "2. Cuadrado" << endl;
    cout << "3. Triangulo" << endl;

    cin >> opcion;

    switch(opcion) { 
        case 1:
            cout << "Ingrese el radio del circulo: ";
            cin >> radio;
            cout << "El area del circulo es: " << 3.1416 * radio * radio << endl;
            break;
        case 2:
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            cout << "El area del cuadrado es: " << lado * lado << endl;
            break;
        case 3:
            cout << "Ingrese la base del triangulo: ";
            cin >> base;
            cout << "Ingrese la altura del triangulo: ";
            cin >> altura;
            cout << "El area del triangulo es: " << (base * altura) / 2 << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            
    }
    
    return 0;
}