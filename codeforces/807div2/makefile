CC=g++

all: exec in.txt
	./exec < in.txt

exec: c.cpp
	$(CC) $^ -o $@

in.txt:
	touch in.txt && echo "0" > in.txt

clean:
	rm exec in.txt
