#include <stdio.h>
#include <iostream>
using namespace std;

string f1;
string f2;

string comparar(string f1, string f2) {
    if (f1.length() != f2.length()) {
        return "naaaaaaaaaao";
    }
    for (int i = 0; i < f1.size(); i++){
        if(f1[i] != f2[i])
            return "NAAAAAAAAAO";
    }return "SSSSSISIIIIIIM";
}

int main(){
    cin >> f1;
    cin >> f2;
    cout << comparar(f1,f2);
    string iguais = (f1 == f2) ? "sim" : "nao"; 
    cout << endl << iguais;
    string IGUAIS = f1.compare(f2) ? "nao" : "sim";
    cout << endl << IGUAIS;
}

