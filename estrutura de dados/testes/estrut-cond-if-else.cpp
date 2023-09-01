#include <iostream>

using namespace std;

int main (){
    float nota1, nota2;
    cout << "Informe a nota 1\n";
    cin >> nota1;
    cout << "Informe a nota 2\n";
    cin >> nota2;
    float media = (nota1+nota2)/2;
    cout << "Media= " << media << endl;


    //Comparacoes: Igualdade: == , Diferente: != , Outros: > , < , >= , <=
    //if (media >=5){
    //    cout<<"Aluno Aprovado";
    // }

    //if (media >=5){
    //    cout << "Aluno Aprovado\n";
    //} else{
    //    cout<<"Aluno reprovado\n";
    //}
    
    // 0-2.5 D, 2.5-5 C, 5-7.5 B, 7.5-10 A

    if (media < 2.5){
        cout<<"Nota final: D\n";
    } else if (media <5){
        cout<<"Nota final: C\n";
    }else if (media < 7.5){
        cout<<"Nota final: B\n";
    }else{
        cout<<"Nota final: A\n";
    }
    
    //Operadores lógicos: E: && , OU: || , Não: !

    float freq;
    cout << "Qual e a frequencia do aluno\n";
    cin >> freq;

    //if (media>=5 && freq>=75){
    //    cout << "Aluno Aprovado!\n";
    //} else{
    //    cout<< "Aluno Reprovado!\n";
    //}

    //if(media < 5 || freq < 75){
    //    cout << "Aluno Reprovado!\n";
    //} else{
    //    cout << "Aluno Aprovado!\n";
    //}

    //Operador Ternário

    (media >= 5) ? cout << "Aprovado!" : cout << "Reprovado!";

    return 0;
}