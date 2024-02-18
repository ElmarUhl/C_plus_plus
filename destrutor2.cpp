//destrutor de uma classe
#include <iostream>
using namespace std;

struct contador {
    int num;

    contador(int n) {
        num=n;
    } //construtor
    void incrementa(void) {
        num+=1;
    } //funcao membro comum, pode ser chamada pelo usuario
    ~contador(void) {
        cout << "Contador destruido, valor:" << num <<endl;
    } //destrutor
};

int main()
{
    contador minutos(0);
    minutos.incrementa();
    cout << minutos.num << endl;
    {
        //inicio de novo bloco de codigo
        contador segundos(10);
        segundos.incrementa();
        cout << segundos.num <<endl;
        //fim de novo bloco de codigo
    }
    minutos.incrementa();

    return 0;
}
