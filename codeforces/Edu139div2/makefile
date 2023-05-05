CC=g++

all: exec in.txt
	./exec < in.txt

exec: a_extremely_round.cpp
	$(CC) -std=c++17 -Wall $^ -o $@

in.txt:
	touch in.txt && echo "0" > in.txt

clean:
	rm exec in.txt
