# Compilador
CC = gcc

# Flags de compilação
CFLAGS = -Wall -g

# Bibliotecas
LIBS = -lpg

# Arquivos
SRC = cards.c
HEADERS = cards.h  # coloque aqui todos os .h usados
OBJ = $(SRC:.c=.o)
EXEC = cards

# Regra padrão
all: $(EXEC)

# Compila e linka
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

# Compila .c para .o, recompila se .c ou .h mudar
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza
clean:
	rm -f $(OBJ) $(EXEC)
