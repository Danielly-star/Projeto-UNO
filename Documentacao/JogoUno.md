# Jogo Uno
A Classe mais importante do projeto

Ela tem como atributos o numero de jogadores, um vector de strings com as cartas nao especiais do baralho e uma funcao void que recebe o numero de jogadores

## funcao void Jogo(int numero_jogadores)
Essa funcao é a responsavel pelo funcionamento do jogo

Ela inicia se crianto um stack chamado pilha, que funciona basicamente como a pilha de cartas da vida real

Após isso um numero aleatorio eh gerado, a carta do vector Baralho com esse numero é movida para a pilha e é deletada do baralho

Esse eh o motivo do vector baralho nao ter inicialmente especiais, o jogo nao pode comecar com uma carta especial.

Codigo que faz o que foi dito acima: 

```
stack<string> pilha;
    //Carta aleatoria é definida como carta na mesa (jogada na pilha)
    this->numero_jogadores = numero_jogadores;
    srand ( time(NULL) );
    int index = rand() % Baralho.size();
    //cout << numero_jogadores << " Jogadores" << '\n'
    //<< "Carta na mesa: " << '\n' << Baralho[index];
    pilha.push(Baralho[index]);
    this->Baralho.erase(this->Baralho.begin() - 1 + index);
```

Apos isso as cartas especiais sao adicionadas ao baralho e as cartas do baralho sao distribuidas aos jogadores, 7 cartas por jogador

Breves instrucoes sao dadas a jogador

Codigo que faz o que foi dito acima:

```
//Parte abaixo distribui aleatoriamente as cartas paras os jogadores
    vector <vector<string>> maos_dos_jogadores;
    Mao_Joagador deck;
    for (int i = 0; i < numero_jogadores; i++)
    {
        for (int o = 0; o < 7; o++)
        {
            index = rand() % Baralho.size();
            deck.addCartas(this->Baralho[index]);
            this->Baralho.erase(std::next(this->Baralho.begin()) - 1 + index);
        }
        maos_dos_jogadores.push_back(deck.cartas);
        deck.cartas.clear();
    }
    /*
    for (int o = 0; o < numero_jogadores; o++)
    {
        cout << '\n' << "---------------------" << '\n' << "Cartas j" << o + 1 << ":" <<'\n';
    for (int i = 0; i < maos_dos_jogadores[o].size(); i++)
    {
        cout << maos_dos_jogadores[o][i] << " ";
    }
    }*/
    cout << '\n' 
    <<"digite o numero da carta que quer jogar, se nao tiver nenhuma digite 0 para pular sua vez"
    << '\n' << "pular fara com que voce automaticamente compre uma carta!" << '\n' ;
```

Agora o loop do jogo ira comecar para isso eh definido que o jogador atual eh o 1, nao esta revertido e nem bloqueado
A cada comeco de jogada se fala de quem eh o turno qual a carta na mesa atualmente e quais cartas tal jogador tem

```
int jogador_atual = 1;
    bool is_reversed = false;
    bool is_blocked = false;

    //Aqui comeca o loop do jogo
    while (true)
    {
        INICIO:
        cout << "---------------------" << '\n' << "J" << jogador_atual << ", eh seu turno!" << '\n';
        cout << "Carta na mesa atualmente: " << '\n' <<pilha.top() << '\n'
        << '\n'
        << "Cartas j" << jogador_atual << ":" << '\n';
        for (int i = 0; i < maos_dos_jogadores[jogador_atual-1].size(); i++)
    {
        cout << maos_dos_jogadores[jogador_atual-1][i] << " ";
    }
```

Agora chegamos ao cerne do jogo a escolha de cartas. Essa parte comeca com um cin do numero da carta que quer ser jogada e depois varios if's 
que variam com esse numero.

Exemplo:
```
int n_carta;
        CARTA: cin >> n_carta;
        while (cin.fail())
        {
        cin.clear();
        cin.ignore();
        cout << "Escolha invalida, favor escrever somente numeros inteiros" << '\n';
        cin >> n_carta;
        }

        //Aqui fica a opção de se pular a vez
        if (n_carta == 0)
        {
            index = rand() % Baralho.size();
            maos_dos_jogadores[jogador_atual-1].push_back(this->Baralho[index]);
            this->Baralho.erase(std::next(this->Baralho.begin()) - 1 + index);
        }
        else if (n_carta < 0)
        {
            cout << '\n' << "Carta invalida! Escolha outra" << '\n';
            goto CARTA;
        }
        else if (n_carta > maos_dos_jogadores[jogador_atual-1].size() )
        {
            cout << '\n' << "Carta invalida! Escolha outra" << '\n';
            goto CARTA;
        }
        
       if (n_carta <= maos_dos_jogadores[jogador_atual-1].size() and n_carta > 0)
        { //Bilhoes de if's// }
        else {carta invalida selecione outra;
        goto CARTA;}
```

Dentro do segundo if primeiro se define o que sera feito se a carta escolhida for especial sem cor, pois essas nao dependem da carta da mesa para serem jogadas

```
else if (maos_dos_jogadores[jogador_atual-1][n_carta-1][0] == 'W') //se a carta escolhida for o WILD
            {
                maos_dos_jogadores[jogador_atual-1].erase(std::next(maos_dos_jogadores[jogador_atual-1].begin()) - 2 + n_carta );
                string cor;
                cout << '\n' << "Qual cor quer escolher? Escreva a inicial (Opcoes: A, V, L, C)" <<'\n';
                cin >> cor;
                
                pilha.push(cor);
                goto FIM;
            }
```

Depois se define o que será feito se a carta tiver cor
```
else if (maos_dos_jogadores[jogador_atual-1][n_carta-1][0] != 'W' or maos_dos_jogadores[jogador_atual-1][n_carta-1][0] != 'Q') //se a carta escolhida nao for nem +4 nem WILD
            {//Bilhoes de if's//}
      
 ```     
   
   
   
