main: Main.o Matriz.o Item.o Jugador.o Obstaculo.o Bomba.o Espina.o Normal.o V.o  
	g++ Main.o Matriz.o Item.o Jugador.o Obstaculo.o Bomba.o Espina.o Normal.o V.o -o main
	rm *.o

Main.o: Main.cpp Matriz.cpp
	g++ -c Main.cpp

Matriz.o: Matriz.cpp Item.cpp Jugador.cpp Obstaculo.cpp Bomba.cpp Espina.cpp Normal.cpp V.cpp
	g++ -c Matriz.cpp

Item.o: Item.cpp
	g++ -c Item.cpp

Jugador.o: Jugador.cpp Item.cpp
	g++ -c Jugador.cpp

Obstaculo.o: Obstaculo.cpp Item.cpp
	g++ -c Obstaculo.cpp

Bomba.o: Bomba.cpp Item.cpp
	g++ -c Bomba.cpp

Normal.o: Normal.cpp Bomba.cpp Item.cpp
	g++ -c Normal.cpp

Espina.o: Espina.cpp Bomba.cpp Item.cpp
	g++ -c Espina.cpp

V.o: V.cpp Bomba.cpp Item.cpp
	g++ -c V.cpp