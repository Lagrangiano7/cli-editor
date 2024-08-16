CC=gcc
TARGET=editor
C_FILES=./code/dump_file.c \
./code/print_help.c \
./code/strcmp.c \
./code/endswith.c \
./code/endswithstr.c \
./code/contains_str.c \
./code/strlen.c \
./editor.c
OBJS=$(C_FILES:.c=.o)

all compile: $(TARGET)
all: clean
.PHONY: all compile

%.o:
	$(CC) -c $(@:.o=.c) -o $@ -ffreestanding -fno-exceptions

$(TARGET): $(OBJS)
	$(CC) $? -o $(TARGET)

clean:
	rm -f *.o $(TARGET).o
	find . -name \*.o | xargs —no-run-if-empty rm