# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1/out

# Include any dependencies generated for this target.
include lib/CMakeFiles/Shapes.dir/depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/Shapes.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/Shapes.dir/flags.make

lib/CMakeFiles/Shapes.dir/Shapes.cpp.o: lib/CMakeFiles/Shapes.dir/flags.make
lib/CMakeFiles/Shapes.dir/Shapes.cpp.o: ../lib/Shapes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/Shapes.dir/Shapes.cpp.o"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1/out/lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Shapes.dir/Shapes.cpp.o -c /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1/lib/Shapes.cpp

lib/CMakeFiles/Shapes.dir/Shapes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Shapes.dir/Shapes.cpp.i"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1/out/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1/lib/Shapes.cpp > CMakeFiles/Shapes.dir/Shapes.cpp.i

lib/CMakeFiles/Shapes.dir/Shapes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Shapes.dir/Shapes.cpp.s"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1/out/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1/lib/Shapes.cpp -o CMakeFiles/Shapes.dir/Shapes.cpp.s

# Object files for target Shapes
Shapes_OBJECTS = \
"CMakeFiles/Shapes.dir/Shapes.cpp.o"

# External object files for target Shapes
Shapes_EXTERNAL_OBJECTS =

lib/libShapes.a: lib/CMakeFiles/Shapes.dir/Shapes.cpp.o
lib/libShapes.a: lib/CMakeFiles/Shapes.dir/build.make
lib/libShapes.a: lib/CMakeFiles/Shapes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libShapes.a"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1/out/lib && $(CMAKE_COMMAND) -P CMakeFiles/Shapes.dir/cmake_clean_target.cmake
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1/out/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Shapes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/Shapes.dir/build: lib/libShapes.a

.PHONY : lib/CMakeFiles/Shapes.dir/build

lib/CMakeFiles/Shapes.dir/clean:
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1/out/lib && $(CMAKE_COMMAND) -P CMakeFiles/Shapes.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/Shapes.dir/clean

lib/CMakeFiles/Shapes.dir/depend:
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1/out && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1 /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1/lib /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1/out /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1/out/lib /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/11.1/out/lib/CMakeFiles/Shapes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/Shapes.dir/depend
