CC=g++

all: exec in.txt
	./exec < in.txt

exec: d.cpp
	$(CC) -std=c++17 -Wall $^ -o $@

in.txt:
	touch in.txt && echo "0" > in.txt

clean:
	rm exec in.txt
