#include <iostream>
using namespace std;

class ponto
{
 private: //nao precisaria por private, em class e default
    float x; //sao ocultos por default
    float y; //sao ocultos por default
 public: //daqui em diante tudo e acessivel.
    void inicializa(float a,float b) {
        x=a;
        y=b;
    } //as funcoes de uma classe podem acessar os atributos private dela mesma.
    void mostra(void) {
        cout << "X:" << x << " , Y:" << y << endl;
    }
};

int main()
{
    ponto ap; //instanciacao

    ap.inicializa(0.0,0.0); //metodos public
    ap.mostra(); //metodos public

    return 0;
}
