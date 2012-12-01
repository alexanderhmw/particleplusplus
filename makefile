CFLAGS = -Wall -std=c++11 -I./include -O2
CC=g++
SRC=$(patsubst %.cpp, %.o, $(wildcard ./include/*.h))
OBJ=$(addprefix ./, $(addsuffix .o, $(basename $(SRC))))
TARGET=main

default: all

all: $(TARGET) 

$(TARGET): $(SRC)
	$(CC) -o main.out main.cpp $(CFLAGS) 
clean:
	rm -f $(TARGET) $(OBJ)
.PHONY: all clean 


