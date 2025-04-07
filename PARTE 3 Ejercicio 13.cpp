#include <iostream>

#include <string>

using namespace std;

int main() {
int age, experience;
cin>>age>>experience;
if(age>=18){
cout << "Elegibe para coordinador de proyecto" << endl;
}else{
cout << "No es eleigeb para ningún puesto" << endl;
}
if (experience>3){
cout << "Elegibe para director de proyecto " << endl;
}
if (experience >5){
cout << "Elegible para director senior" << endl;
}
return 0;
}
