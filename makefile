
#macros
BIN=bin/
OBJ=obj/
INC=include/
LIB=lib/

all : bin/main 


$(BIN)main: obj/main.o $(LIB)libled.a
	g++ -o bin/main obj/main.o -L$(LIB) -lled

$(OBJ)main.o: src/main.cpp $(INC)bloqueLed.h 
	g++ -c src/main.cpp -o obj/main.o -I$(INC)

$(LIB)libled.a: obj/bloqueLed.o
	ar rsv $(LIB)libled.a obj/bloqueLed.o 


$(OBJ)bloqueLed.o: src/bloqueLed.cpp $(INC)bloqueLed.h 
	g++ -c src/bloqueLed.cpp -o obj/bloqueLed.o -Iinclude/

mrproper: clean
	rm  $(BIN)/main 
clean:
	echo "Limpiando..."
	rm $(OBJ)/*.o lib/lib*.a    

