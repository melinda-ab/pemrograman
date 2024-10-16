# Target to compile the C++ program
jarak : jarak.o
	g++ jarak.o -o jarak

# Target to compile the object file
jarak.o : jarak.cpp
	g++ -c jarak.cpp -o jarak.o

# Target to run the program
run : jarak
	./jarak

# Target to clean up compiled files
clean :
	rm -f jarak.o jarak