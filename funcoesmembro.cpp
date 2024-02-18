#include <iostream>

using namespace std;

struct contador //conta ocorrencias de algo
{
    int num; //numero, posicao do contador
    void incrementa(void){num=num+1;}; //incrementa contador
    void comeca(void){num=0;}; //comeca a contar, "reset"
    int retorna_num(void) {return num;};
};

int main(int argc, char const *argv[])
{
    //teste do contador
    contador umcontador;
    //nao esqueca dos parenteses, e uma funcao membro nao dado!
    umcontador.comeca();
    cout << umcontador.retorna_num() << endl;
    umcontador.incrementa();
    cout << umcontador.retorna_num() << endl;

    return 0;
}
