all: main.exe
	rm *.o
main.exe: main.o Rhombus.o TArray.o
	g++ -pedantic -Wall -Werror -Wno-sign-compare -Wno-long-long -lm -g main.o TArray.o Rhombus.o -o main.exe
main.o: main.cpp
	g++ -pedantic -Wall -Werror -Wno-sign-compare -Wno-long-long -lm -c -g main.cpp
Rhombus.o: Rhombus.cpp
	g++ -pedantic -Wall -Werror -Wno-sign-compare -Wno-long-long -lm -c -g Rhombus.cpp
TArray.o: TArray.cpp
	g++ -pedantic -Wall -Werror -Wno-sign-compare -Wno-long-long -lm -c -g TArray.cpp

