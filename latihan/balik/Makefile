string : string.o; g++ string.o -o string
string.o : string.cpp; g++ -c string.cpp -o string.o
run : string; ./string
clean :; rm -f string.o string; rm -f teststring.o teststring
teststring : teststring.o; g++ teststring.o -o teststring
teststring.o : teststring.cpp; g++ -c teststring.cpp -o teststring.o
test : teststring;./teststring