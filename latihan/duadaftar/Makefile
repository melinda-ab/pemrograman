daftar : daftar.o; g++ daftar.o -o daftar
daftar.o : daftar.cpp; g++ -c daftar.cpp -o daftar.o
run : daftar; ./daftar
clean :; rm -f daftar.o daftar; rm -f testdaftar.o testdaftar
testdaftar : testdaftar.o; g++ testdaftar.o -o testdaftar
testdaftar.o : testdaftar.cpp; g++ -c testdaftar.cpp -o testdaftar.o
test : testdaftar; ./testdaftar