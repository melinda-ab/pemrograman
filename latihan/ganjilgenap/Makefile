hitung : hitung.o; g++ hitung.o -o hitung
hitung.o : hitung.cpp; g++ -c hitung.cpp -o hitung.o
run : hitung; ./hitung
clean :; rm -f hitung.o hitung rm -f testhitung.o testhitung
testhitung : testhitung.o; g++ testhitung.o -o testhitung
testhitung.o : testhitung.cpp; g++ -c testhitung.cpp -o testhitung.o
test : testhitung; ./testhitung