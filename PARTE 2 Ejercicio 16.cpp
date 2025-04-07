#include <iostream>
using namespace std;

int main() {
    int start_rent, end_rent;
    cin >>start_rent >> end_rent;

    if (start_rent >= 0 && start_rent <= 23 && end_rent > start_rent && end_rent <= 24) {
        int tarifa1 = 0;
        int tarifa2 = 0; 
        if (start_rent < 7) {
            if (end_rent <= 7) {
                tarifa1 += end_rent - start_rent;
            } else {
                tarifa1 += 7 - start_rent;
            }
        }if (start_rent <17 && end_rent >7) {
            int inicio = (start_rent<7) ? 7 : start_rent;
            int fin = (end_rent >17) ?17 : end_rent;
            if (inicio < fin){
                tarifa2 += fin - inicio;
            }
        }
        if (end_rent >17) {
            int inicio = (start_rent > 17)?start_rent : 17;
            if (inicio < end_rent){
            tarifa1 += end_rent - inicio;
            }
        }
        int total = tarifa1 * 1 + tarifa2 * 2;

        cout << "Has alquilado una bicicleta por"<< endl;

        if (tarifa1> 0)
            cout <<tarifa1<<" hora(s) con el tarifario de 1 boliviano(s)"<< endl;
        if (tarifa2 >0)
            cout<< tarifa2 <<" hora(s) con el tarifario de 2 boliviano(s)"<< endl;
        cout<<"El monto total a pagar es de "<<total << " boliviano(s)."<< endl;
        
    } else if (start_rent == end_rent) {
        cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!"<< endl;
    } else if(start_rent > end_rent) {
        cout<<"Que extraño, el inicio del alquiler es después del final."<< endl;
    } else {
        cout<<"Las horas deben estar entre 0 y 24!"<<endl;
    }

    return 0;
}
