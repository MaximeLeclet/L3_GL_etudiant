FLAGS=g++ -std=c++11 -Wall -Wextra

all: module1.o sayHello.o sayHello.out clean

module1.o: module1.cpp
	$(FLAGS) -c module1.cpp

sayHello.o: sayHello.cpp
	$(FLAGS) -c sayHello.cpp

sayHello.out : sayHello.o sayHello.o
	$(FLAGS) -o sayHello.out sayHello.o module1.o

clean:
	rm -rf *.o
