# Target to compile the C++ program
terbesar : terbesar.o
	g++ terbesar.o -o terbesar

# Target to compile the object file
terbesar.o : terbesar.cpp
	g++ -c terbesar.cpp -o terbesar.o

# Target to run the program
run : terbesar
	./terbesar

# Target to clean up compiled files
clean :
	rm -f terbesar.o terbesar