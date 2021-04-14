# Name of the project
PROJ_NAME = BankManagementSystem
TEST_PROJ_NAME = Test_$(PROJ_NAME)

# All source code files
SRC = src/Admin_Account_Create.c\
src/Admin_Account_Delete_All.c\
src/Admin_Account_Delete.c\
src/Admin_Account_List.c\
src/Admin_Account_Record.c\
src/Admin_Account_Update.c\
src/Calculator_Addition.c\
src/Calculator_Division.c\
src/Calculator_Factorial.c\
src/Calculator_Modulus.c\
src/Calculator_Multiplication.c\
src/Calculator_Power.c\
src/Calculator_Subtraction.c\
src/Customer_Account_Balance.c\
src/Customer_Account_Detail.c\
src/Customer_Account_Withdrawl.c\
src/File_Check_All.c\
src/Login_Admin.c\
src/Login_Customer.c\
src/Login_Detail_Update.c

# All test source files
TEST_SRC = test/Test_Account_Calculator.c\
unity/unity.c

COV_SRC = Test_Account_Calculator.c

INC_H = inc
INC_T = unity

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
.PHONY: run clean test doc all

all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

coverage:
	cp test/test.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) unity/unity.c test.c $(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) test.c


cppcheck:
	cppcheck --enable=all $(SRC) main.c
debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)


clean:
	$(RM) *.DAT
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov