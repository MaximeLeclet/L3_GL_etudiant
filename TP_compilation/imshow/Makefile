FLAGS=g++ -std=c++11 -Wall -Wextra

all: imshow.o imshow.out clean

imshow.o: imshow.cpp
	$(FLAGS) -c imshow.cpp `pkg-config --libs opencv`

imshow.out : imshow.o
	$(FLAGS) -o imshow.out imshow.o `pkg-config --libs opencv`

clean:
	rm -rf *.o
