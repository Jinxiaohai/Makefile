# The file was created by xiaohai to compile cpp file.

# command
CXX := g++
LD  := ld
AR  := ar

# command parameters
LDFLAGS  := -shared -fPIC
ARFLAGS  := -rc
CXXFLAGS := -Wall -g -O3

# define some variables of directory
PWD := $(shell pwd)
SRC := $(PWD)/src
OBJ := $(PWD)/obj
LIB := $(PWD)/lib
BIN := $(PWD)/bin
INC := $(PWD)/include
SAM := $(PWD)/samples

vpath %.h    $(INC)
vpath %.cpp  $(SRC)
vpath %.o    $(OBJ)
vpath %.so   $(LIB)

# root libraries
# ROOTLIBS := $(shell root-config --libs)
# ROOTGLIBS := $(shell root-config --glibs)

INCDIR = -I$(INC)
OBJDIR = -L$(OBJ)
LIBDIR = -L$(LIB)

SOURCE  = $(notdir $(wildcard $(SRC)/*.cpp))
SAMPLE  = $(notdir $(wildcard $(SAM)/*.cpp))
INCLUDE = $(notdir $(wildcard $(INC)/*.h))
OBJECT  = $(notdir $(wildcard $(OBJ)/*.o))
SHARED  = $(notdir $(wildcard $(LIB)/*.so))
BINARY  = $(notdir $(wildcard $(BIN)/*.exe))

CC = g++
FLAGS = -Wall -g -std=c++11 $(INCDIR) $(LIBDIR)
COMPILE = $(CC) $(FLAGS) -c

EXE = analysis.exe
all: clean $(EXE)

$(EXE): $(OBJECT)
	$(CXX) $(CXXFLAGS) -o $(BIN)/$(EXE) $(SAM)/analysis.cpp $(LIBDIR) $(INCDIR)

$(SHARE): $(OBJECT)
	$(CXX) $(LDFLAGS) -o $(LIB)/$(SHARE) $(OBJECT)

$(OBJECT): $(SOURCE) $(INCLUDE)
	$(CXX) -c $(SRC)/$^ -o $(OBJ)/$@ $(INCDIR)

.PHONY:clean
clean:
	$(RM) $(OBJECT) $(BINARY)
