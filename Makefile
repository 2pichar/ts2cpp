CC=g++
FILES=
OUT=dist/js
FLAGS=
OBJECTS=$(SOURCES:.cpp=.o)

all: $(SOURCES) $(OUT)
$(OUT): $(OBJECTS)

build:
	$(CC) $(FILES) $(FLAGS) -o $(OUT)
clean:
	find . -name '*.o' -delete && find . -name '$(EXECUTABLE)' -delete 