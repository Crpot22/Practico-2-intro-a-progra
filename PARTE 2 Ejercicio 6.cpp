// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int dia ;
    cin>>dia ;
    if(dia >=1 && dia <= 7){
        switch (dia){
        case 1 :
        cout<<"Es lunes"<<endl;
        break;
        case 2 :
        cout<<"Martes"<<endl;
        break;
        case 3 :
        cout<<"Miercoles"<<endl;
        break;
        case 4 :
        cout<<"Jueves"<<endl;
        break;
        case 5 :
        cout<<"Viernes"<<endl;
        break;
        case 6 :
        cout<<"Sabado"<<endl;
        break;
        case 7 :
        cout<<"Domingo"<<endl;
        break;
    }
    }else{
        cout<<"Invalid input"<<endl;
    }
    return 0;
}
