#include <iostream>
using namespace std;
#include <string>

int main() {
    char nombre[50], apellido[50]; 

    cout << "Ingrese su nombre y apellido: ";
    cin >> nombre >> apellido; 

    cout << apellido << ", " << nombre << endl;

    
    return 0;
}
