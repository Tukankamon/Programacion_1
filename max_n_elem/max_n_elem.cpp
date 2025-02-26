#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Cuantos elementos quieres? ";
    cin >> n;                               //pregunta cuantos elementos
    int list[n];
    for (int i = 0; i < n; i++) {           //hace una lista de los elementos (hay que hacer enter en cada entradam)
        cin >> list[i];
    }
    int temp = 0;
    for (int j = 0; j < n; j++) {           //Itera sobre la lista, si el elemento es mayor que "temp" se convierte en el nuevo temp
        if (list[j] > temp) {
            temp = list[j];
        }
    }
    cout << temp;
    //system("pause");
    return 0;
}   