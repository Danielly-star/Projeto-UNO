#ifndef MAO_JOGADOR_H
#define MAO_JOGADOR_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Mao_Joagador
{
private:
    /* data */
public:
    vector<string> cartas;
    Mao_Joagador();

    void addCartas(string carta );
};

#endif
