DEBUG = -g 
CXX = g++ 
CXXFLAGS = -Wall -Werror -Wextra
#LDFLAGS = 
SRC = src 
TST = tst 
OBJ = obj 

all : 
	build

.PHONY : all

build : 
	main person.o

%.o : $(SRC)/%.cpp: 
	$(CXX) $@ $< $(CXXFLAGS) -o  \
		mv $@ $(OBJ)

	
