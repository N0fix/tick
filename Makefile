_OBJS= logger.o generated_preload.o wrapper.o pid_handling.o custom_preloads.o
HEADER_DIR=./headers/
CFLAGS+= -w -m32 -lpthread -lrt -ldl -lcrypt -pthread
INCLUDES=-I$(HEADER_DIR)

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
	$(CC) -fPIC -c ./$(SRC)/logger.c -o logger.o $(CFLAGS) $(INCLUDES)
	$(CC) -fPIC -c ./$(SRC)/pid_handling.c -o pid_handling.o -m32 $(CFLAGS) $(INCLUDES)
	$(CC) -fPIC -c ./$(SRC)/$(CU_PRELOAD)/custom_preloads.c -o custom_preloads.o $(CFLAGS) $(INCLUDES)
	$(CC) -fPIC -c ./$(SRC)/$(PRELOAD)/generated_preload.c -o generated_preload.o $(CFLAGS) $(INCLUDES)
	$(CC) -fPIC -c ./$(SRC)/$(PRELOAD)/wrapper.c -o wrapper.o $(CFLAGS) $(INCLUDES)
	$(CC)  -m32 -static -shared $(_OBJS) -o $(SHARED_LIB)  