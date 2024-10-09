CXX = g++
CXXFLAGS = -Wall -std=c++11

OBJS = hw04.o hw04add.o hw04sub.o hw04mul.o hw04menu.o

hw04: $(OBJS)
	$(CXX) $(CXXFLAGS) -o hw04 $(OBJS)

hw04.o: hw04.cpp hw04.hpp
	$(CXX) $(CXXFLAGS) -c hw04.cpp

hw04add.o: hw04add.cpp hw04.hpp	
	$(CXX) $(CXXFLAGS) -c hw04add.cpp

hw04sub.o: hw04sub.cpp hw04.hpp
	$(CXX) $(CXXFLAGS) -c hw04sub.cpp

hw04mul.o: hw04mul.cpp hw04.hpp
	$(CXX) $(CXXFLAGS) -c hw04mul.cpp

hw04menu.o: hw04menu.cpp hw04.hpp
	$(CXX) $(CXXFLAGS) -c hw04menu.cpp

clean:
	rm -f *.o hw04

tar:
	tar cf hw04.tar hw04.hpp hw04.cpp hw04add.cpp hw04sub.cpp hw04mul.cpp hw04menu.cpp Makefile hw04.scr

