PROJ_NAME = BankManagementSystem
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = build

INC = -Iinc\
-Iunity

SRC = src/Account_Create.c\
src/Account_Delete_All.c\
src/Account_List.c\
src/Account_Record.c\
src/Account_Update.c\
src/Calculator_Addition.c\
src/Calculator_Division.c\
src/Calculator_Factorial.c\
src/Calculator_Modulus.c\
src/Calculator_Multiplication.c\
src/Calculator_Power.c\
src/Calculator_Subtraction.c\
src/File_Check_All.c\
src/Login_Detail_Update.c\
src/Login.c
TEST_SRC = test/Test_Account_Calculator.c\
unity/unity.c


#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

.PHONY : all test coverage run clean doc

all:$(BUILD_DIR)
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC)

doc:
	make -C doc
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make clean -C doc
	rmdir $(BUILD_DIR) doc/html