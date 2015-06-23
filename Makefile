endian: endian.c
	cc -std=c11 -Os -o endian endian.c

clean:
	rm -f endian
