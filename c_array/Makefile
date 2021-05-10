SOURCE_DIR  := .
INCLUDE_DIR := .

CC          := g++
CXXFLAGS    := -Wall -I$(INCLUDE_DIR)
TARGET      := main.out

SOURCES     := $(wildcard $(SOURCE_DIR)/*.c)
OBJECTS     := $(SOURCES:.cpp=.o)



.PHONY: all


all: $(TARGET)
	./$(TARGET)


$(TARGET): $(OBJECTS)
	$(CC) -I$(INCLUDE_DIR) -o $@ $^


%.o: %.c
	$(CC) $(CXXFLAGS) -c -o $@ $^


clean:
	-rm -rf *.o ./**/*.o $(TARGET)
