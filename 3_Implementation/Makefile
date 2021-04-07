
#Target : dependency
#<TAB>Command

PROJECT_NAME = all.exe
SRC = Main.c\
src\Login.c\
src\Addition.c\
src\Subtraction.c

INC = inc\
inc\Calculator.h

$(PROJECT_NAME): $(SRC)
	gcc -I $(INC) $(SRC) -o all.exe
	
run: $(PROJECT_NAME)
	$(PROJECT_NAME)
	
clean:
	del /q *.exe
	