# compilateur
CC := gcc
# options de compilation
CFLAGS := -std=c99 -Wall -Wextra -pedantic -ggdb 

# règle de compilation --- exécutables
all : Projet

Projet : Projet.o Node.o 
	$(CC) $(CFLAGS) -o $@ $^	

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< 

# options de compilation
clean:
	rm *.o Projet 
