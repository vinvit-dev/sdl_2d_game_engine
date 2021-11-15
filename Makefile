OBGS = main.cpp

LIBS = -lSDL2

OBG = out

all:
	g++ $(OBGS) $(LIBS) -o $(OBG)
