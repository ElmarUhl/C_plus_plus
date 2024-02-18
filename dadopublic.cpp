#include <iostream>
using namespace std;

class ponto
{
    float x; //sao ocultos por default
 public: //daqui em diante tudo e acessivel.
    ponto(float a,float b); //construtor tambem pode ser inline ou nao
    void mostra(void);
    void move(float dx,float dy);
    float y; //* Y nao e' mais ocultado
};

ponto::ponto(float a,float b) {
    x=a;
    y=b;
}
void ponto::mostra(void) {
    cout << "X:" << x << " , Y:" << y << endl;
}
void ponto::move(float dx,float dy) {
    x+=dx;
    y+=dy;
}

int main()
{
    ponto ap(0.0,0.0);

    ap.mostra();
    ap.move(1.0,1.0);
    ap.mostra();

    ap.y=100.0;
    ap.mostra();

    return 0;
}
