#include <iostream>

#include <string>

using namespace std;

int main() {
int num_docs;
cin >> num_docs;
if (num_docs==1){
cout << "Se encontró un documento" << endl;
}else{
cout<<num_docs<<" documentos encontrados"<<endl;
}
return 0;
}
