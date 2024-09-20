COMPILER = gcc
COMPILERFLAGS = -Wall -g -g3
LIBRARIES =
OBJFILES = allocator.o main.o
TARGET = cdeez


all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(COMPILER) $(COMPILERFLAGS) -o $(TARGET) $(OBJFILES) $(LIBRARIES)

clean:
	rm -f $(OBJFILES) $(TARGET) *~
