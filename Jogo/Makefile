CC := g++
FLAGS := -Wall -m64
TARGET := main.out

all: main

JogoUno:
	$(CC) $(FLAGS) -c JogoUno.cpp -o JogoUno.o

Mao_Joagador:
	$(CC) $(FLAGS) -c Mao_Joagador.cpp -o Mao_Joagador.o

Menu:
	$(CC) $(FLAGS) -c Menu.cpp -o Menu.o
  
MenuLogo: Menu
	$(CC) $(FLAGS) -c MenuLogo.cpp -o MenuLogo.o

MenuTutorial: Menu
	$(CC) $(FLAGS) -c MenuTutorial.cpp -o MenuTutorial.o

main: JogoUno Mao_Jogador Menu MenuLogo MenuTutorial
	$(CC) $(FLAGS) JogoUno.o Mao_Jogador.o Menu.o MenuLogo.o MenuTutorial.o main.cpp -o $(TARGET)

clean:
	$(RM) -r *.o *.out $(TARGET)
