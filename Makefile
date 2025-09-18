#NOTE: Comments in this files are comments for my purpose to remember how to create a Makefile and what are the values and there utilization.
DEBUG = -g
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra
#LDFLAGS = 
SRC = src
TST = tst
OBJ = obj

all : build

.PHONY : all

build : person.o place.o

#NOTE: Here is taken only the first file because there is no link edition made between files. 
%.o : $(SRC)/%.cpp
	$(CXX) $< $(CXXFLAGS) $(DEBUG) -c
	@mv $@ $(OBJ) # @ hides the line 

main : $(wildcard $(OBJ)/*.o)
	$(CXX) $(CXXFLAGS) $^ $(DEBUG) -o $@

clean:
	rm -f obj/*
