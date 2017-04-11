lab3:main.o sac.o
	g++ -o lab3 main.o sac.o

sac.o:sac.cpp sac.h
	g++ -c sac.cpp

main.o:main.cpp sac.h
	g++ -c main.cpp

clean:
	rm sac*.o
