#include <iostream>
using namespace std;
int main() {
    char letter ;
    cin>>letter;
    if (letter>= 'A' && letter <= 'Z'){
        cout<<"upper-case alphabet"<<endl;
    }else if(letter >= 'a' && letter <= 'z'){
        cout<<"lower-case alphabet"<<endl;
    }else{
        cout<<"Not an alphabet"<<endl;
    }
    return 0;
}
