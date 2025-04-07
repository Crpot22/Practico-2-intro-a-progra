#include <iostream>
#include <string>
using namespace std;
int main() {
    string color1, color2, color3;
    int pisos1, pisos2, pisos3;
    cin >> color1 >> pisos1 >> color2 >> pisos2 >> color3 >> pisos3;
    
    string testimonio_color;
    int testimonio_pisos;
    cin >>testimonio_color >> testimonio_pisos;
    
    if ((testimonio_color == "?" || testimonio_color == color1)&&
    (testimonio_pisos == -1 || testimonio_pisos == pisos1)) {
        
        cout << 1 << endl;
    }
    if ((testimonio_color == "?" || testimonio_color == color2) &&
    (testimonio_pisos == -1 || testimonio_pisos == pisos2)) {
        cout << 2 << endl;
        
    }
    
    if ((testimonio_color == "?" || testimonio_color == color3)&&
        (testimonio_pisos== -1 || testimonio_pisos == pisos3)) {
        cout<< 3 << endl;
    }
    
    return 0;
}
