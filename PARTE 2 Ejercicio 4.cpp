#include <iostream>
using namespace std;

int main() {
    double costo_original, monto_desc_min, monto_desc_max, min_desc, max_desc;
    double reslt_a,reslt_b;
    cin>> costo_original >> monto_desc_min >> monto_desc_max >> min_desc >> max_desc;
    
    if (costo_original> monto_desc_min ||costo_original > monto_desc_max){
        min_desc= min_desc / 100;
        max_desc= max_desc / 100;
        
        if(costo_original>monto_desc_max){
            reslt_b= costo_original-(max_desc*costo_original);
            cout<<reslt_b<<endl;
            
        }else if(costo_original>monto_desc_min){
            reslt_a=costo_original -(min_desc*costo_original);
            cout<<reslt_a<<endl;
        }
    }else{
        cout<<"No hay descuento: "<<costo_original ;
    }

    return 0;
}
