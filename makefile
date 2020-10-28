.PHONY: clean all test run runtest

BIN_DIR = ./bin
BUILD_DIR = ./build
SRC_DIR = ./src
TEST_DIR = ./test

all: $(BIN_DIR)/prog

$(BIN_DIR)/prog: $(BUILD_DIR)/main.o $(BUILD_DIR)/functions.o
	gcc  $(BUILD_DIR)/main.o $(BUILD_DIR)/functions.o -o $(BIN_DIR)/prog

$(BUILD_DIR)/main.o: 
	gcc   -c $(SRC_DIR)/main.c -o $(BUILD_DIR)/main.o

$(BUILD_DIR)/functions.o: 
	gcc   -c $(SRC_DIR)/functions.c -o $(BUILD_DIR)/functions.o


test: $(BUILD_DIR)/maint.o $(TEST_DIR)/ctest.h $(BUILD_DIR)/functions.o $(BUILD_DIR)/mytests.o
	gcc $(BUILD_DIR)/maint.o $(BUILD_DIR)/functions.o $(BUILD_DIR)/mytests.o -o $(BIN_DIR)/test
$(BUILD_DIR)/maint.o: 
	gcc -c $(TEST_DIR)/maint.c -o $(BUILD_DIR)/maint.o

$(BUILD_DIR)/mytests.o:
	gcc -c $(TEST_DIR)/mytests.c -o $(BUILD_DIR)/mytests.o


run:
	./bin/prog
	
runtest:
	./bin/test

clean:
	rm -f build/*.o
	rm -f bin/prog
	rm -f bin/test
