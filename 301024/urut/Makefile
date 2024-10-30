# Target to compile the C++ program
sorting : sorting.o
	g++ sorting.o -o sorting

# Target to compile the object file
sorting.o : sorting.cpp
	g++ -c sorting.cpp -o sorting.o

# Target to run the program
run : sorting
	./sorting

# Target to clean up compiled files
clean :
	rm -f sorting.o sorting