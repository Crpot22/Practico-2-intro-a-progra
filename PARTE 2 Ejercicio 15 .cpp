// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {

    int a = 51, b = 876, c = 235;
    int new_a;

    cout << "Los valores son: a = " << a << " b = " << b << " y c = " << c << endl;
    cout << "Permutamos: a ⇒ b, b ⇒ c, c ⇒ a" << endl;
    new_a = a;
    a = c;
    c = b;
    b = new_a;

    cout << "Los valores despues de la permutación son: a = " << a << " b = " << b << " c=  "<<c<<endl;

    return 0;
}
