#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin>> a >> b;
    if(a > 0 && b> 0){
    int suma = a + b ;
    cout<<suma<<endl;
    
    string suma_conv= to_string(suma);
    int suma_size = suma_conv.size();
    cout<<suma_size<<endl;
    int producto= suma_size*suma;
    cout<<producto<<endl;
    
    } else{
        cout<<"0"<<endl;
    }
    
    return 0;
}
