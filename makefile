$CC = gcc
$CFLAGS = -I.

lumos:lumos.c
	$(CC) -o lumos lumos.c $(CFLAGS)
