#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    
    cout<<"Introduzca los valores para Ax² + Bx + C = 0"<<endl;
    cin>>a >> b >> c;
    
    if (a != 0){
        double x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a) ;
        double x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a) ;
        cout<<x1<<" "<<x2 ;
        
    }else{
    cout<<"Error, no se puede dividir entre 0"<<endl;
}
    return 0;
}
