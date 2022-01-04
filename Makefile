CC=g++
FILES=include/js/c++/*.cpp
OUT=dist/js
FLAGS=
OBJECTS=$(FILES:.cpp=.o)

all: $(FILES) $(OUT)
$(OUT): $(OBJECTS)

build:
	$(CC) $(FILES) $(FLAGS) -o $(OUT)
clean:
	find . -name '*.o' -delete && find . -name '$(EXECUTABLE)' -delete 
