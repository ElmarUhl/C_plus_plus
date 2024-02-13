#include <iostream> //para cout
using namespace std;

struct circulo
{
    float raio;
    float x; //atributo coordenada cartesiana x
    float y; //atributo coordenada cartesiana y

    void move(float dx,float dy) //função membro ou função membro move
    {
        x += dx; //equivale a x=x+dx;
        y += dy;
    }

    void mostra(void) //função membro ou função membro mostra
    {
        cout << "Raio:" << raio << endl;
        cout << "X:" << x << endl;
        cout << "Y:" << y << endl;
    }
};

int main()
{
    circulo ac; // * instanciação de um objeto circulo (criacao)
    ac.x = 0.0;
    ac.y = 0.0;
    ac.raio = 10.0;

    ac.mostra();

    ac.move(1.0,1.0);
    ac.mostra();

    ac.x=100.0;
    ac.mostra();

    return 0;
}
