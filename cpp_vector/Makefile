SOURCE_DIR  := .
INCLUDE_DIR := .

CC          := g++
CXXFLAGS    := -Wall -I$(INCLUDE_DIR) -lgtest -pthread
TARGET      := main.out

SOURCES     := $(wildcard $(SOURCE_DIR)/*.cpp)
OBJECTS     := $(SOURCES:.cpp=.o)



.PHONY: all


all: $(TARGET)
	./$(TARGET)


$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^ $(CXXFLAGS)


%.o: %.c


clean:
	-rm -rf *.o ./**/*.o $(TARGET)
