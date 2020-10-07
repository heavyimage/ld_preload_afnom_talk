all:
	gcc random_num.c -o random_num
	gcc -shared -fPIC unrandom.c -o unrandom.so

clean:
	rm random_num
	rm unrandom.so
