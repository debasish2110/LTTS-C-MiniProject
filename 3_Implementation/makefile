# used for comments

#make file syntax
#TARGET-NAME: dependencies
#<TAB SPACE>command

#all.exe:division.c substraction.c multiplication.c addition.c main.c
#	gcc test.c division.c substraction.c multiplication.c addition.c -o all.exe
#clean: 
#	del /q *.exe   
  
PROJ_NAME = E_Book_On_C
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

TEST_SRC = test/test.c\
unity/unity.c\
inc/myHeader.h

INC = -Iinc\
-Iunity\
-Isrc

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

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

all:$(BUILD_DIR)
	gcc e_book.c $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

coverage: ${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC)

doc:
	make -C doc $(BUILD_DIR):
	mkdir $(BUILD_DIR)


clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make clean -C doc
	rmdir $(BUILD_DIR) doc/htm