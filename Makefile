GCC ?= g++

CCFLAGS := -std=c++11

LDFLAGS += 
INCLUDES += 

SRCS=main.cpp sorting.cpp
OBJS=main.o sorting.o
RM=rm -f
EXEC=app

# Target rules
all: build

build: ${EXEC}

%.o: %.cpp %.h
	$(GCC) $(CCFLAGS) $(INCLUDES) -o $@ -c $<

${EXEC}: ${OBJS}
	$(GCC) $(CCFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	${RM} ${EXEC} *.o 

dist-clean:
	$(RM) $(EXEC)
