CXX					= g++
CXXFLAGS		= -Wall
INCLUDE			= -I
LDFLAGS			= -L

.PHONY: main clean

_OBJ 				= file1.o file2.o main.o
OBJ					= $(patsubst %, %, $(_OBJ))
%.o: 

main: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(INCLUDE) $(LDFLAGS)

clean:
	rm *.o *.exe

