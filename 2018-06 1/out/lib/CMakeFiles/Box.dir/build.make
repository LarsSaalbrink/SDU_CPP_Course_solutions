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
CMAKE_SOURCE_DIR = "/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1/out"

# Include any dependencies generated for this target.
include lib/CMakeFiles/Box.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/CMakeFiles/Box.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/Box.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/Box.dir/flags.make

lib/CMakeFiles/Box.dir/Box.cpp.o: lib/CMakeFiles/Box.dir/flags.make
lib/CMakeFiles/Box.dir/Box.cpp.o: ../lib/Box.cpp
lib/CMakeFiles/Box.dir/Box.cpp.o: lib/CMakeFiles/Box.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1/out/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/Box.dir/Box.cpp.o"
	cd "/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1/out/lib" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/CMakeFiles/Box.dir/Box.cpp.o -MF CMakeFiles/Box.dir/Box.cpp.o.d -o CMakeFiles/Box.dir/Box.cpp.o -c "/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1/lib/Box.cpp"

lib/CMakeFiles/Box.dir/Box.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Box.dir/Box.cpp.i"
	cd "/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1/out/lib" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1/lib/Box.cpp" > CMakeFiles/Box.dir/Box.cpp.i

lib/CMakeFiles/Box.dir/Box.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Box.dir/Box.cpp.s"
	cd "/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1/out/lib" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1/lib/Box.cpp" -o CMakeFiles/Box.dir/Box.cpp.s

# Object files for target Box
Box_OBJECTS = \
"CMakeFiles/Box.dir/Box.cpp.o"

# External object files for target Box
Box_EXTERNAL_OBJECTS =

lib/libBox.a: lib/CMakeFiles/Box.dir/Box.cpp.o
lib/libBox.a: lib/CMakeFiles/Box.dir/build.make
lib/libBox.a: lib/CMakeFiles/Box.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1/out/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libBox.a"
	cd "/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1/out/lib" && $(CMAKE_COMMAND) -P CMakeFiles/Box.dir/cmake_clean_target.cmake
	cd "/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1/out/lib" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Box.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/Box.dir/build: lib/libBox.a
.PHONY : lib/CMakeFiles/Box.dir/build

lib/CMakeFiles/Box.dir/clean:
	cd "/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1/out/lib" && $(CMAKE_COMMAND) -P CMakeFiles/Box.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/Box.dir/clean

lib/CMakeFiles/Box.dir/depend:
	cd "/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1/out" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1" "/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1/lib" "/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1/out" "/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1/out/lib" "/SharedDisk/IDriveCloud/Cloud-Drive_kaasviking@gmail.com/Opgaver/CPP/Exercises/SDU_CPP_Course_solutions/2018-06 1/out/lib/CMakeFiles/Box.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : lib/CMakeFiles/Box.dir/depend
