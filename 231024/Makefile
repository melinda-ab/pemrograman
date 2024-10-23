# Target to compile the C++ program
rekursif : rekursif.o
	g++ rekursif.o -o rekursif

# Target to compile the object file
rekursif.o : rekursif.cpp
	g++ -c rekursif.cpp -o rekursif.o

# Target to run the program
run : rekursif
	./rekursif

# Target to clean up compiled files
clean :
	rm -f rekursif.o rekursif