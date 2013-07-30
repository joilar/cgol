# File: Makefile
# Author: John Oilar
# Date: 07/29/2013
# Description: Builds an implementation of Conway's Game of Life.

PROGRAM = cgol
COMPILER = g++
FLAGS = 
OBJS = main.o

all: $(OBJS)
	$(COMPILER) -o $(PROGRAM) $(OBJS)

main.o:

.PHONY: clean
clean:
	rm -f $(PROGRAM) *.o
