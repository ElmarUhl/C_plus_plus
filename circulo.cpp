#include <iostream>
using namespace std;

//struct que representa um circulo.
struct circulo 
{
    float raio;
    //posicoes em coordenadas cartesianas
    float x; 
    float y;
};

int main()
{
    circulo ac; //criacao de variavel , veja comentarios.

    ac.raio=10.0; //modificacao de conteudo (atributos) da struct
    ac.x=1.0; //colocando o circulo em uma posicao determinada
    ac.y=1.0; //colocando o circulo em uma posicao determinada

    //verificacao dos atributos alterados.
    cout << "Raio:"<<ac.raio <<endl; 
    cout << "X:"<<ac.x << "\n"; // "\n"==endl
    cout << "Y:" <<ac.y<< endl;

    return 0;
}
