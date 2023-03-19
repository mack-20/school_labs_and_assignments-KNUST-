CPPC=g++
CFLAGS=-c -Wall
OUTFLAGS=-o $(EXE)
SOURCES=Main.cpp Administrator\\Administrator.cpp Customer\\Customer.cpp Shop\\Shop.cpp Items\\Item.cpp SimAndArts\\SimAndArts.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXE=ShopMngApp.exe


all:$(SOURCES) $(EXE)

$(EXE):$(OBJECTS)
	$(CPPC) $(OUTFLAGS) $(OBJECTS)

.cpp.o:
	$(CPPC) $(CFLAGS) $< -o $@

clean:
	del $(OBJECTS) $(EXE)