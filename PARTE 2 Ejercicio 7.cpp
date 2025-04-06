// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    double radio ;
    long double area ;
    long double PI = 3.14159265358979323846;
    cin>>radio ;
    if(radio > 0){
        area = (4 * PI)*(radio*radio) ;
        cout<<area;
    }else{
        cout<<"Error: Radius cannot be negative."<<endl;
    }
    return 0;
}
