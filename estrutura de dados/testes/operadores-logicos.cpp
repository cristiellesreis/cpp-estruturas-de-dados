#include <iostream>

using namespace std;

int main (){
    
    float freq;
    cout << "Qual é a frequencia do aluno\n";
    cin >> freq;

    if(media>= 5 && freq >= 75){
        cout << "Aluno Aprovado\n";
    } else{
        cout<< "Aluno Reprovado\n";
    }

    return 0;
}