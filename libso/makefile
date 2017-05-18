# The file was created by xiaohai to compile cpp file.

# command
CXX := g++

# command parameters
LDFLAGS  := -shared -fpic
ARFLAGS  := -rc
CXXFLAGS := -Wall -g -O3 -fpic
FPICFLAGS := -fpic

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
TARGETLIB := libxiaohai.so

SOURCE  := $(notdir $(wildcard $(SRC)/*.cpp))
INCLUDE := $(notdir $(wildcard $(INC)/*.h))
OBJECT  := $(patsubst %.cpp,%.o,$(SOURCE))
SHARED  := $(notdir $(wildcard $(LIB)/*.so))
BINARY  := $(notdir $(wildcard $(BIN)/*.exe))

all: clean demo.exe

demo.exe: $(SAM)/demo.cpp
	$(CXX) $(CXXFLAGS) -o $(BIN)/demo.exe $(SAM)/demo.cpp $(LIBDIR) -lxiaohai $(INCDIR)

.PHONT:lianjie
lianjie:$(OBJECT)
	$(CXX) $(LDFLAGS) -o $(LIB)/$(TARGETLIB) $(OBJ)/$(OBJECT)

$(OBJECT): $(SOURCE)
	$(CXX) $(FPICFLAGS) -c $< -o $(OBJ)/$@ $(INCDIR)

.PHONY:clean
clean:
	$(RM) $(OBJ)/$(OBJECT) $(BIN)/*
