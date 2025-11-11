CXX = g++
CXXFLAGS = -std=c++17 -Wall -I Headers

SRC = $(wildcard Src/*.cpp)
OBJ = $(SRC:.cpp=.o)
TARGET = AutoInsurance

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)