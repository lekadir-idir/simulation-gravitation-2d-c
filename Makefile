CC = gcc
CFLAGS = -Iinclude
SRC = src/main.c src/circle.c src/rayon.c src/gestion.c
EXEC = tracing

all: $(EXEC)
	./$(EXEC)

$(EXEC): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(EXEC) -lSDL2 -lm

clean:
	rm -f $(EXEC)

.PHONY: all clean
