SOURCE_DIR := src
INCLUDE_DIR := include

NVCC := nvcc
CXXFLAGS := -Wall -I$(INCLUDE_DIR)
TARGET := main.out

SOURCES := $(wildcard $(SOURCE_DIR)/*.cu)
OBJECTS := $(SOURCES:.cpp=.o)



.PHONY: all 


all: $(TARGET)
	./$(TARGET)


$(TARGET): $(OBJECTS)
	$(NVCC) -I$(INCLUDE_DIR) -o $@ $^


%.o: %.c
	$(NVCC) $(CXXFLAGS) -c -o $@ $^


clean:
	-rm -rf *.o ./**/*.o $(TARGET)
