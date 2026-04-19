CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = jogo

OBJS = main.o Hero.o Goblin.o Ogre.o

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp Hero.h Goblin.h Ogre.h Creature.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Hero.o: Hero.cpp Hero.h Creature.h
	$(CXX) $(CXXFLAGS) -c Hero.cpp

Goblin.o: Goblin.cpp Goblin.h Creature.h
	$(CXX) $(CXXFLAGS) -c Goblin.cpp

Ogre.o: Ogre.cpp Ogre.h Creature.h
	$(CXX) $(CXXFLAGS) -c Ogre.cpp

clean:
	rm -f *.o $(TARGET)