#/bin/bash

#g++ -std=c++11 -Wall -Wextra -o sayHello.out sayHello.cpp module1.cpp

g++ -std=c++11 -Wall -Wextra -c module1.cpp 
g++ -std=c++11 -Wall -Wextra -c sayHello.cpp
g++ -std=c++11 -Wall -Wextra -o sayHello.out sayHello.o module1.o

