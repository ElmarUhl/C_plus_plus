#include <iostream>
using namespace std;

struct contador //conta ocorrencias de algo
{
    int num; //numero do contador

    void comeca(void){num=0;}; //comeca a contar
    void incrementa(void){num=num+1;}; //incrementa contador
};

//teste do contador
int main() 
{
    contador umcontador;
    umcontador.comeca(); //nao esqueca dos parenteses, e uma funcao membro e nao atributo!

    cout << umcontador.num << endl;
    umcontador.incrementa();
    cout << umcontador.num << endl;

    return 0;
}
