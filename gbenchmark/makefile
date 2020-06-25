CXX					:= g++
CXXFLAGS		:= -Wall -Werror
INCLUDE			:= -I/mingw64/include/
LDFLAGS			:= -L/mingw64/lib -lbenchmark

.PHONY: hello_test

hello_test: hello_test.cpp
	$(CXX) -o $@ $^ $(CXXFLAGS) $(INCLUDE) $(LDFLAGS)

