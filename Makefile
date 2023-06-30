CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = main

$(TARGET): main.cpp
	make clean && $(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp && clear && ./$(TARGET)

clean:
	rm -f $(TARGET)
