CXX					= g++
CXXFLAGS		= -Werror
INCLUDE			= -I
LDFLAGS			= -L

.PHONY: compilation clean

_OBJ 				= compilation.o compilation_main.o
OBJ					= $(patsubst %, %, $(_OBJ))
%.o: 

compilation: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(INCLUDE) $(LDFLAGS)

clean:
	rm *.o *.exe