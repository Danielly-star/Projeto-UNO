#include "MenuTutorial.hpp"
#include <iostream>
#include <string>

void MenuTutorial::exibir(){
    std::cout << '\n' << "No jogo uno temos cartas com cores e numeros." << '\n'
        << "O objetivo eh ficar sem nenhuma carta em maos" << '\n'
        << "Para os jogos nao demorarem demais o jogo tambem acaba se nao houver cartas sobrando para compra"
        << '\n' 
        << "As cores sao azul, verde, laranja e cinza. Jah os numeros vao de 0 a 9." << '\n'
        << "So se pode jogar uma carta na mesa se essa tiver mesma cor e/ou numero que a da mesa" << '\n'
        << "Portanto no jogo as cartas sao representadas da seguinte forma" << '\n'
        << "(inicial da cor)(numero da carta) ou seja:" << '\n'
        << "A4 = Azul numero 4, C4 = Cinza numero 4, L9 = Laranja numero 9, etc..." << '\n' << '\n'
        << "Tambem existem as cartas especiais" << '\n'
        << "Elas sao o Block, o Reverse, o mais dois, o mais 4 e a Wild" << '\n'
        << "O Block impede o proximo jogador de jogar" << '\n'
        << "O Reverse inverte o sentido de quem joga, ou seja " << '\n'
        << "a ordem se inverte de j1>j2>j3... para ...j1<j2<j3" << '\n'
        << "O mais dois adiciona 2 cartas na mao do proximo jogador" << '\n'
        << "O mais quatro adiciona 4 cartas na mao do proximo jogador" << '\n'
        << "O wild permite mudar a cor das cartas que serao jogadas" << '\n'
        << "As tres primeiras cartas especiais (Block Reverse +2) tem cor" << '\n'
        << "E sao representadas por (cor)B, (cor)R, (cor)D" << '\n'
        << "Já as duas ultimas (+4 e wild) nao tem cor e sao representadas por Q e W"<< '\n' << '\n'
        << "O jogo comecara com uma carta nao especial aleatoria na mesa e cada jogador tera 7 cartas"<< '\n'
        << "Digite jogar para jogar, ou tutorial para ver o tutorial de novo"<<'\n';
}
