PROGRAM := hanoi
COMP := g++
DIR := bin
FLAGS := -o

compile: clean createdir
	$(COMP) hanoi.cpp $(FLAGS) $(DIR)/$(PROGRAM)

createdir:
	mkdir $(DIR)

clean:
	if [ -d $(DIR) ]; then \
	  rm -rf $(DIR); \
	fi
