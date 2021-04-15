# Name of the project
PROJ_NAME = BankManagementSystem
TEST_PROJ_NAME = Test_$(PROJ_NAME)

# Output directory
BUILD_DIR = build

# All include folders with header files
INC = -Iinc\
-Iunity

# All source code files
SRC = Main.c\
src/Admin_Account_Create.c\
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
src/Customized_Getch.c\
src/Login_Admin.c\
src/Login_Customer.c\
src/Login_Detail_Update.c

# All test source files
TEST_SRC = src/Calculator_Addition.c\
src/Calculator_Division.c\
src/Calculator_Factorial.c\
src/Calculator_Modulus.c\
src/Calculator_Multiplication.c\
src/Calculator_Power.c\
src/Calculator_Subtraction.c\
test/Test_Account_Calculator.c\
unity/unity.c

# Document files
DOCUMENTATION_OUTPUT = documentation/html

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

# Run the target even if the matching name exists
.PHONY : all test coverage run clean doc

# Project Output name
all:$(BUILD_DIR)
	gcc $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

# Call `make run` to run the application
run: all
	./$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC)

# Document the code using Doxygen
doc:
	make  -C ./documentation

# Remove all the built files, invoke by `make clean`
clean:
	$(RM) $(call FixPath,$(BUILD_DIR)*.$(EXEC))
	make clean ./documentation
	rmdir $(BUILD_DIR) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD_DIR):
	mkdir $(BUILD_DIR)



