CXX = g++
CXX_FLAGS = -g -Wall -pedantic -std=c++2a
SRC = ./src
SRC_LOGIC = ./src/game_logic
BIN = ./bin

build: ${BIN}/app.out

${BIN}/app.out: ${SRC}/main.cpp ${SRC_LOGIC}/*.cpp
	${CXX} ${CXX_FLAGS} ${SRC}/main.cpp ${SRC_LOGIC}/*.cpp -o ${BIN}/app.out

run: ${BIN}/app.out
	${BIN}/app.out

clean:
	rm -rf ${BIN}/*