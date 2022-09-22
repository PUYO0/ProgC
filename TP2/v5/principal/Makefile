C=gcc
CFLAGS= -W -Wall -std=c99
LDFLAGS=
EXEC=app
SRC=../generator/generator.c app.c
OBJ= $(SRC:.c=.o)

all: $(EXEC)

app: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c 
	$(CC) -o $@ -c $< $(CFLAGS) -I../generator

.PHONY: clean mrproper

clean:
	rm -rf *.o 

mrproper: clean
	rm -rf $(EXEC)