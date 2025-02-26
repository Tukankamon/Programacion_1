//ejercicio 6

//Escribe un algoritmo que calcule el valor de S para un número real x de manera
//que el error sea menor que 0.0001

//S = 1+ x +x^2/2! + x^3/3! ....        es decir que evalue e^x

#include <iostream>
using namespace std;

long double pow(long double base, int exp){
    if (exp > 1){
        return base*pow(base, exp-1);
       }
    else if (exp==1){
        return base;
       }
    else if (exp == 0){
        return 1;
       }
    else{
        cout << "Error ";
       }
}

long long fact(int m){
   if (m > 1){
    return m*fact(m-1);
   }
   else if (m==1){
    return 1;
   }
   else{
    cout << "Error ";
   }
}

long double taylor(long double y, int n){           //se puede poner directamente en main() pero asi queda mas clean
    return pow(y, n)/fact(n);
}

int main() {
    //cout << " " << pow(2, 3)<< " ";
    long double x;
    cout << " Evaluar e^x: ";
    cin >> x;
    long double s = 1;
    for (long long k = 1; k < 15; k++){               //si pongo mas grande la K, se peta unq sea un long long
        //cout << taylor(x, k) << " ";
        s = s + taylor(x, k);
        //cout << fact(k) << " ";
    }
    cout << s;
    return 0;
}