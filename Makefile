all: debug union weird_for zero_struct


debug: debug.c
	gcc -o debug debug.c

union: union.c
	gcc -o union  union.c

weird_for: weird_for.c
	gcc -o weird_for weird_for.c

zero_struct: zero_struct.c
	gcc -o zero_struct zero_struct.c

clean:
	rm debug union weird_for zero_struct
