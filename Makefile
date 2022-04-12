GCC_FLAGS = -g++ -g -Wall -pedantic -std=c++20
SRC = ./src
SRC_LOGIC = ./src/game_logic
BIN = ./bin

build:
	${GCC_FLAGS} ${SRC}/main.cpp ${SRC_LOGIC}/*.cpp -o ${BIN}/app.exe

run:
	${GCC_FLAGS} ${SRC}/main.cpp ${SRC_LOGIC}/*.cpp -o ${BIN}/app.exe
	${BIN}/app.exe

clean:
	del bin