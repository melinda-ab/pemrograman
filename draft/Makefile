# Target to compile the C++ program
draft : draft.o
	g++ draft.o -o draft

# Target to compile the object file
draft.o : draft.cpp
	g++ -c draft.cpp -o draft.o

# Target to run the program
run : draft
	./draft

# Target to clean up compiled files
clean :
	rm -f draft.o draft