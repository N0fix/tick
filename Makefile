_OBJS= logger.o generated_preload.o wrapper.o pid_handling.o custom_preloads.o
HEADER_DIR=./headers/
CFLAGS+= -w   -fPIC -lrt -ldl -lcrypt -pthread
INCLUDES=-I$(HEADER_DIR)
ARCH= -m64
SHARED_LIB=libcu.so
SRC=src
PRELOAD=default_preloads
CU_PRELOAD=custom_preloads

.PHONY: all
all:	delete $(SHARED_LIB) clean

clean:
	-@rm *.o

delete:
	-@rm $(SHARED_LIB)

$(SHARED_LIB): 
	$(CC) $(ARCH) -c ./$(SRC)/logger.c -o logger.o $(CFLAGS) $(INCLUDES)
	$(CC) $(ARCH) -c ./$(SRC)/pid_handling.c -o pid_handling.o  $(CFLAGS) $(INCLUDES)
	$(CC) $(ARCH) -c ./$(SRC)/$(CU_PRELOAD)/custom_preloads.c -o custom_preloads.o $(CFLAGS) $(INCLUDES)
	$(CC) $(ARCH) -c ./$(SRC)/$(PRELOAD)/generated_preload.c -o generated_preload.o $(CFLAGS) $(INCLUDES)
	$(CC) $(ARCH) -c ./$(SRC)/$(PRELOAD)/wrapper.c -o wrapper.o $(CFLAGS) $(INCLUDES)
	$(CC) $(ARCH) -shared $(_OBJS) -o $(SHARED_LIB) -fPIC -ldl
