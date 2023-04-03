TARGET = my_ngram
OBJ = my_ngram.o
SRC = my_ngram.c
CFLAGS =  -Wall -Wextra -Werror -pedantic -std=c11

all: $(TARGET)

$(TARGET): $(OBJ)
	gcc $(CFLAGS) -o $(TARGET) $(OBJ)

$(OBJ): $(SRC)
	gcc $(CFLAGS) -c $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all
