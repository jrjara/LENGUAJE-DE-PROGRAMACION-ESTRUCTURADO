/* Dado una palabra determinar si es palíndromo (una palabra es palÍndromo si se lee igual de
izquierda a derecha o de derecha a izquierda), por ejemplo ANA. */

#include<iostream>
#include<string.h>

using namespace std;

int main() {
    string palabra;
    int aux = 0, igual = 0, i;
    
    cout << "Ingrese una palabra para evaluar si es palindromo: ";
    getline(cin >> ws, palabra);
    
    for(i = palabra.length()- 1; i >= 0; i--) {
        if(palabra[i] == palabra[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(palabra.length() == igual) {
        cout << "La palabra es palindromo" << endl;
    } else {
        cout << "La palabra no es palindromo" << endl;
    }
    
    return 0;

}