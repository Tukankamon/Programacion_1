//Ejercicio 7
//Cuenta las comas y los caracteres

#include <iostream>
using namespace std;

int main(){
    string text;
    string dot = ".";
    cin >> text;
    for (int i = 0; i < text.size(); i++){
        if (text[i] == dot){
            cout << "HOLa";
        }
    }
}
