CC=g++-11
FLAGS=
INCLUDE=

.cpp .o:
	$(CC) $< $(INCLUDE) $(FLAGS) -o $(HOME)/bin/$(@)
