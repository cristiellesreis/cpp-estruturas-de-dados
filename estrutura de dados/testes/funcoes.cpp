#include <iostream>

using namespace std;

int t; //variavel global - fora das funcoes
#define pi 3.14;
#define curtir cout << "Curta esse video!\n";

void inscrever(){
    cout << "Se inscreva no canal do\nprofessor Douglas Maioli!\n";
}

int somar (int &x, int &y){
    int t; //variavel local - dentro das funcoes
    t=1;

    int soma;
    soma = x+y;
    x=30;
    return soma;
}

int main(){
    int t;
    t= 0;

    inscrever();

    int a=5, b=4;
    int s;
    s = somar(a,b);
    cout << "Soma: " << s << endl;
    cout << "Valor de t: " << t << endl;
    //cout << pi;

    curtir;

  

    return 0;
}