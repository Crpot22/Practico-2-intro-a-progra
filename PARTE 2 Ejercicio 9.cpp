#include <iostream>
#include <string>
using namespace std;

int main() {
    string word_1, word_2, word_3, word_4, word_5;
    
    cin >> word_1 >> word_2 >> word_3 >> word_4 >> word_5;
    
    char a = word_1[0];
    
    int last_letter_word_5_size = word_5.size();
    char z = word_5[last_letter_word_5_size - 1];  
    cout << a << z << endl;
    if(a==z){
        cout<<"Hemos encontrado algo! "<<endl;
    }else{
        cout<<"Aun sin suerte "<<endl;
    }
    
    return 0;
}
