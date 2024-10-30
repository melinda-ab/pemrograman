# Target to compile the C++ program
searching : searching.o
	g++ searching.o -o searching

# Target to compile the object file
searching.o : searching.cpp
	g++ -c searching.cpp -o searching.o

# Target to run the program
run : searching
	./searching

# Target to clean up compiled files
clean :
	rm -f searching.o searching