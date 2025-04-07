#include <iostream>

#include <string>

using namespace std;

int main() {
int age, experience;
cin>>age>>experience;
if(age>=18&& experience<3){
cout << "Elegibe para coordinador de proyecto" << endl;
}else if (age>18 && experience>=3 && experience<5){
cout << "Elegibe para director de proyecto " << endl;
}else if (age>18 && experience >=5){
cout << "Elegible para director senior" << endl;
}else {
cout << "No es eleigeb para ningún puesto" << endl;
}

return 0;
}
