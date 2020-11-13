.PHONY: help compile32 compile64
.DEFAULT_GOAL= help
CC=gcc
CFLAGS_OBJECT=-O3 -c -fPIC
CFLAGS_SHARED=-shared -ldl
src=$(wildcard src/*.c)
deps=$(wildcard src/*.h)
obj=$(src:.c=.o)

compile32:
	$(CC) preload.c -m32 -c -fPIC -o preload.o
	$(CC) -m32 preload.o -shared -o libcu.so -ldl

compile64:
	$(CC) preload.c  -c -fPIC -o preload.o
	$(CC) preload.o -shared -o libcu.so -ldl


help:
	@grep -E '(^[a-zA-Z_-]+:.*?##.*$$)|(^##)' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[32m%-10s\033[0m %s\n", $$1, $$2}' | sed -e 's/\[32m##/[33m/'
