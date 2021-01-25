#include <iostream>

using namespace std;
//Kayann Costa Soares//
//Matricula: 405262//

int main(){

    int ano1, ano2, mes1, mes2, dia1, dia2;

    cout << "Digite Dia 1: " << endl;
    cin >> dia1;
    cout << "Digite Mes 1: " << endl;
    cin >> mes1;
    cout << "Digite Ano 1: " << endl;
    cin >> ano1;

    cout << "Digite Dia 2: " << endl;
    cin >> dia2;
    cout << "Digite Mes 2: " << endl;
    cin >> mes2;
    cout << "Digite Ano 2: " << endl;
    cin >> ano2;

    if(ano1<ano2){
        cout << "Ordem Cronologia por Ano: " << endl;
        cout << dia1 << "/" << mes1 << "/" << ano1 << endl;
        cout << dia2 << "/" << mes2 << "/" << ano2 << endl;
    }
    else if(ano1==ano2 && (mes1<mes2)){
               cout << "Ordem Cronologia por Mes: " << endl;
               cout << dia1 << "/" << mes1 << "/" << ano1 << endl;
               cout << dia2 << "/" << mes2 << "/" << ano2 << endl;
    }
    else if(ano1==ano2 && mes1==mes2 && (dia1<dia2)){
              cout << "Ordem Cronologia por Dia: " << endl;
              cout << dia1 << "/" << mes1 << "/" << ano1 << endl;
              cout << dia2 << "/" << mes2 << "/" << ano2 << endl;
    }else{
        cout << "Nao estao em Ordem Cronologica!" << endl;
    }

    return 0;
}
