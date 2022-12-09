CC=g++

all: exec in.txt
	./exec < in.txt > out.txt

exec: c.cpp
	$(CC) -std=c++17 -Wall $^ -o $@

in.txt:
	touch in.txt && echo "0" > in.txt

clean:
	rm exec in.txt
