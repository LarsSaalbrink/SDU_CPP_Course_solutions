# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1/out

# Include any dependencies generated for this target.
include lib/CMakeFiles/ExpenseManagement.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/CMakeFiles/ExpenseManagement.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/ExpenseManagement.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/ExpenseManagement.dir/flags.make

lib/CMakeFiles/ExpenseManagement.dir/ExpenseManagement.cpp.o: lib/CMakeFiles/ExpenseManagement.dir/flags.make
lib/CMakeFiles/ExpenseManagement.dir/ExpenseManagement.cpp.o: ../lib/ExpenseManagement.cpp
lib/CMakeFiles/ExpenseManagement.dir/ExpenseManagement.cpp.o: lib/CMakeFiles/ExpenseManagement.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/ExpenseManagement.dir/ExpenseManagement.cpp.o"
	cd /SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1/out/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/CMakeFiles/ExpenseManagement.dir/ExpenseManagement.cpp.o -MF CMakeFiles/ExpenseManagement.dir/ExpenseManagement.cpp.o.d -o CMakeFiles/ExpenseManagement.dir/ExpenseManagement.cpp.o -c /SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1/lib/ExpenseManagement.cpp

lib/CMakeFiles/ExpenseManagement.dir/ExpenseManagement.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ExpenseManagement.dir/ExpenseManagement.cpp.i"
	cd /SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1/out/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1/lib/ExpenseManagement.cpp > CMakeFiles/ExpenseManagement.dir/ExpenseManagement.cpp.i

lib/CMakeFiles/ExpenseManagement.dir/ExpenseManagement.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ExpenseManagement.dir/ExpenseManagement.cpp.s"
	cd /SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1/out/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1/lib/ExpenseManagement.cpp -o CMakeFiles/ExpenseManagement.dir/ExpenseManagement.cpp.s

# Object files for target ExpenseManagement
ExpenseManagement_OBJECTS = \
"CMakeFiles/ExpenseManagement.dir/ExpenseManagement.cpp.o"

# External object files for target ExpenseManagement
ExpenseManagement_EXTERNAL_OBJECTS =

lib/libExpenseManagement.a: lib/CMakeFiles/ExpenseManagement.dir/ExpenseManagement.cpp.o
lib/libExpenseManagement.a: lib/CMakeFiles/ExpenseManagement.dir/build.make
lib/libExpenseManagement.a: lib/CMakeFiles/ExpenseManagement.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libExpenseManagement.a"
	cd /SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1/out/lib && $(CMAKE_COMMAND) -P CMakeFiles/ExpenseManagement.dir/cmake_clean_target.cmake
	cd /SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1/out/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ExpenseManagement.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/ExpenseManagement.dir/build: lib/libExpenseManagement.a
.PHONY : lib/CMakeFiles/ExpenseManagement.dir/build

lib/CMakeFiles/ExpenseManagement.dir/clean:
	cd /SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1/out/lib && $(CMAKE_COMMAND) -P CMakeFiles/ExpenseManagement.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/ExpenseManagement.dir/clean

lib/CMakeFiles/ExpenseManagement.dir/depend:
	cd /SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1/out && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1 /SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1/lib /SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1/out /SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1/out/lib /SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/14.1/out/lib/CMakeFiles/ExpenseManagement.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/ExpenseManagement.dir/depend
