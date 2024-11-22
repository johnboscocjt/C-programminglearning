#include <iostream>

using namespace std;

// function
void sayHi(){
    cout << "Hello user";
}

void sayHi1(string name){
    cout << "Hello " << name;
}

int main(){
    sayHi();
    sayHi1("Jb");

    return 0;
}