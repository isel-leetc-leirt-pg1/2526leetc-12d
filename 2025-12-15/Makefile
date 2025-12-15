# Nome do compilador
CC = gcc

# Nome do executável
TARGET = game

# Ficheiros fonte
SRC = game.c game.h

# Flags de compilação
CFLAGS = -Wall

# Bibliotecas a ligar
LIBS = -lpg

# Regra principal
all: $(TARGET)

# Como gerar o executável
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LIBS)

# Limpeza
clean:
	rm -f $(TARGET) game.o xpto.o

# Recompilação total
rebuild: clean all
