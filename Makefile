# é um arquivo de script
# se escreve regras de compilação
# a primeira regra é a que executa primeiro

CC = gcc
SRC = ./src
OBJS = ./objs
TARGET = livraria
LIMPAR = rm

all: objetos # compila objetos como pré-requisito; é a dependência do comando
	$(CC) $(OBJS)/menus.o $(OBJS)/main.o -o $(TARGET)

objetos: # compilar todos os arquivos .c
	$(CC) -c ./$(SRC)/menus.c -o $(OBJS)/menus.o
	$(CC) -c main.c -o $(OBJS)/main.o

clear:
	$(LIMPAR) $(OBJS)/*.o
	$(LIMPAR) $(TARGET)
