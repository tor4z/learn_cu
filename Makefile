NVCC := nvcc
CXXFLAGS := -Wall
TARGET := main

SOURCE_DIR := src

SOURCES := $(wildcard $(SOURCE_DIR)/*.cpp)
OBJECTS := $(SOURCES:.cpp=.o)



.PHONY: all 


all: $(TARGET)
	./$(TARGET)


$(TARGET): $(OBJECTS)
	$(NVCC) -o $@ $^


%.o: %.c
	$(NVCC) $(CXXFLAGS) -c -o $@ $^


clean:
	-rm -rf *.o ./**/*.o $(TARGET)
