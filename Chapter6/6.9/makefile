
main : fact_main.o fact.o fact.h
	g++ fact_main.o fact.o -o main
fact_main.o : fact_main.cpp
	g++ -c fact_main.cpp -o fact_main.o
fact.o : fact.cpp fact.h
	g++ -c fact.cpp -o fact.o


clean:
	rm *.o main