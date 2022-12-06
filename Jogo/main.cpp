#include "Mao_Jogador.hpp"
#include "JogoUno.hpp"
#include "MenuLogo.hpp"
#include "MenuTutorial.hpp"
int main()
{
    MenuLogo Logo;
    Logo.exibir();
    cout <<"Para ver o tutorial digite tutorial" << '\n'
    <<"Para jogar digite jogar" <<'\n';
    string escolha;
    int n_jogadores;
    ESCOLHA: cin >> escolha;
    if (escolha == "tutorial")
    {
        MenuTutorial tut;
        tut.exibir();
        goto ESCOLHA;
    }
    else if (escolha == "jogar")
    {
      NJOGADOR:  cout << '\n' << "Quantos jogadores irao jogar (2 a 9 jogadores)" << '\n';
        cin >> n_jogadores;
        while (cin.fail())
        {
        cin.clear();
        cin.ignore();
        cout << "Escolha invalida, favor escrever somente numeros inteiros" << '\n';
        cin >> n_jogadores;
        }
        try
        {
            if(n_jogadores <2 or n_jogadores >9){
            throw std::invalid_argument("Quantidade de jogadores inseridos invalida, re-insira o numero de jogadores");}
        }
        catch(const std::invalid_argument& e)
        {
            std::cerr << e.what() << '\n';
            goto NJOGADOR;
        }
        cout << "Iniciando UNO..." << '\n';
        JogoUno uno;
        uno.Jogo(n_jogadores);
    }
    else if(escolha == "konami"){
        cout << '\n' << "༼つಠ益ಠ༽つ ─=≡ΣO)) HADOUKEN" << '\n';
        goto ESCOLHA;
    }
    else
    {
        cout << '\n'<<"Entrada invalida, favor re-insira (Opcoes: jogar, tutorial)"<<'\n';
        goto ESCOLHA;
    }
    return 0;
}
