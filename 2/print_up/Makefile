CC=gcc
CCFLAGS=-Wall
CLEAN=rm -f
PROG_NAME=printup
OBJ_FILES=*.o
SOURCE_FILES=print_up.c main.c

$(PROG_NAME): $(OBJ_FILES)
	$(CC) $(CCFLAGS) -o $@ $^

$(OBJ_FILES): $(SOURCE_FILES)
	$(CC) $(CCFLAGS) -c $^

clean:
	$(CLEAN) *.o $(PROG_NAME)
