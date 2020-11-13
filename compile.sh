clear ; gcc -m32 -c -fPIC preload.c -o preload.o && gcc -m32 preload.o -shared -o libcu.so -ldl #&& export LD_PRELOAD=$PWD/libcu.so && ./bin
