## Command
command(arg1 agr2 ...)           # execute command

INSTALL(
  TARGETS myrun mylib mystaticlib
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION libstatic
)

ADD_TEST(mytest ${PROJET_BINARY_DIR}/bin/main arg1 arg2 ...)   # make test
ENABLE_TESTING()

## Variable
set(var_name var_value)          # define variable or set value

command(arg1, ${var_name})       # use variable 


## Config
cmake_minimum_required(VERSION 3.7)    # version required
project(proj_name)                     # project name
set(CMAKE_CXX_FLAGS "xxx")             # define compiler
set(CMAKE_BUILD_TYPE "xxx")            # debug or release

## Dependencies
find_package(std_lib_mame VERSION REQUIRED)        # add reference
add_library(<name> [lib_type] source1)             #
include_directories(${std_lib_name_INCLUDE_DIRS})  # include path
add_executable(project_name XXX.cpp)               # build result
target_link_libraries(${std_lib_name_LIBRARIES})   # libraries path

## Util
function(function_name arg)            # define function
add_subdirectory(dir)                  # add sub directory

AUX_SOURCE_DIRECTORY(. SRC_LIST)       # list all files an set file names to variable SRC_LIST

FOREACH(one_dir ${DIR_LIST})           # go through 
  MESSAGE(${one_dir})
ENDFOREACH(onedir)

WHILE(condition)
  COMMAND(ARGS)
ENDWHILE(condition)

IF(expression)
  COMMAND(AGGS)
ELSE(expression)
  COMMAND2(ARGS)
ENDIF(expression)

IF(var)
IF(NOT var)
IF(var1 AND var2)
IF(var1 OR var2)
IF(COMMAND cmd)
IF(EXISTS dir)
IF(EXISTS file)
IF(IS_DIRECTORY dirname)
IF(file1 IS_NEWER_THAN file2)
IF(variable MATCHES regex)             # regular expression 




