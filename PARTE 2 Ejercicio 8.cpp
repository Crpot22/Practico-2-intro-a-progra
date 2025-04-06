#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int total_seconds;
    cin >>total_seconds;
    if(total_seconds>0){
    int hours =total_seconds / 3600;
    int minutes= (total_seconds % 3600) / 60;
    int seconds= total_seconds % 60;
    
    printf("%02d:%02d:%02d", hours, minutes, seconds);
    }else {
        cout<<"Error: Input seconds cannot be negative."<<endl;
    }
    return 0;
}
