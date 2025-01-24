# Compiler to use
CXX = g++

# Compiler flags
# -Wall enables all warnings, -g adds debugging symbols, -O2 enables optimization
CXXFLAGS = -Wall -g -O2

# List of source files
SRCS = main.cpp math.cpp utils.cpp

# List of object files (each .cpp becomes a .o)
OBJS = $(SRCS:.cpp=.o)

# Output executable name
TARGET = makefile_example

# Default target (runs when you just type 'make')
all: $(TARGET)

# Rule to build the final executable
# $@ represents the target (my_program), $^ represents all prerequisites
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to build object files from source files
# $< represents the first prerequisite (source file in this case)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target to remove generated files
# This is a PHONY target (not associated with real files)
.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)

# Debug target to print variables (useful for debugging Makefiles)
.PHONY: debug
debug:
	@echo "Compiler: $(CXX)"
	@echo "Flags: $(CXXFLAGS)"
	@echo "Sources: $(SRCS)"
	@echo "Objects: $(OBJS)"
	@echo "Target: $(TARGET)"

