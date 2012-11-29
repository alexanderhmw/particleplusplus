CFLAGS = -Wall -std=c++11 -I./include
CC=g++
SRC=$(patsubst %.cpp, %.o, $(wildcard ./include/*.h))
OBJ=$(addprefix ./, $(addsuffix .o, $(basename $(SRC))))
TARGET=main

default: all

all: $(TARGET) library

library: $(SRC)
	$(CC) $(CFLAGS) -c -I ./include $(SRC)
	ar rcs libparticleplusplus.a $(SRC)

$(TARGET): $(SRC)
	$(CC) -o main main.cpp $(CFLAGS) 
clean:
	rm -f $(TARGET) $(OBJ)
.PHONY: all clean 


