CC = gcc
CFLAGS = -Wall -Wextra -Iinc -O2 -march=native -flto -MMD
TARGET = ps

# Define source files
SRC = main.c src/ps.c
# Automatically generate object file names (.o)
OBJ = $(SRC:.c=.o)
# Automatically generate dependency file names (.d)
DEP = $(OBJ:.o=.d)

# Default target
all: $(TARGET)

# Link object files to create the final executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

# Pattern rule: compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Include the generated dependency files
# The '-' prefix tells make to ignore errors if .d files don't exist yet
-include $(DEP)

# Clean build artifacts
clean:
	rm -f $(TARGET) $(OBJ) $(DEP)

# Compile and run the application
run: all
	./$(TARGET)

.PHONY: all clean run