CC = g++
CFLAGS = -fdiagnostics-color=always -g
SFML_INCLUDE = -I/workspaces/LIP-1_Projeto-Final/SFML/include
SFML_LIBS = -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system

all: seu_programa

seu_programa: main.cpp
    $(CC) $(CFLAGS) $(SFML_INCLUDE) $^ -o $@ $(SFML_LIBS)

clean:
    rm -f seu_programa
