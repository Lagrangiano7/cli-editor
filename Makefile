CC=gcc
TARGET=editor
C_FILES=./code/file/dump_file.c \
./code/print_help.c \
./code/string/strcmp.c \
./code/string/endswith.c \
./code/string/endswithstr.c \
./code/string/contains_str.c \
./code/string/strlen.c \
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