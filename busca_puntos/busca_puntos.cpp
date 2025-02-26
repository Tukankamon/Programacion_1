//Ejercicio 7
//Cuenta las comas y los caracteres

#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    string text;
    int comma_counter = 0;
    int char_counter = 0;
    cin >> text;
    for (int i = 0; i < text.size(); i++){
        //cout << typeid(text[i]).name() << endl;
        if (text[i] == *"."){
            break;
        }
        else if (text[i] == *","){
            comma_counter++;
        }
        else{
            char_counter++;
        }
    }
    cout << "Se han escrito " << char_counter << " caracteres \n";
    cout << "Y " << comma_counter << " commas";
}
