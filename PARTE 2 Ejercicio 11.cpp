#include <iostream>
#include <string>
using namespace std;

int main() {
    int cod_fibo = 11235813;
    int cod_input;
    cin>>cod_input;
    if(cod_fibo == cod_input){
        cout<<"Se encontro Fibonacci"<<endl;
    }else{
        cout<<"Este no es Fibonacci"<<endl;
    }
    
    return 0;
}
