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
CMAKE_SOURCE_DIR = /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2/out

# Include any dependencies generated for this target.
include lib/CMakeFiles/ArrayInt100.dir/depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/ArrayInt100.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/ArrayInt100.dir/flags.make

lib/CMakeFiles/ArrayInt100.dir/ArrayInt100.cpp.o: lib/CMakeFiles/ArrayInt100.dir/flags.make
lib/CMakeFiles/ArrayInt100.dir/ArrayInt100.cpp.o: ../lib/ArrayInt100.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/ArrayInt100.dir/ArrayInt100.cpp.o"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2/out/lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ArrayInt100.dir/ArrayInt100.cpp.o -c /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2/lib/ArrayInt100.cpp

lib/CMakeFiles/ArrayInt100.dir/ArrayInt100.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ArrayInt100.dir/ArrayInt100.cpp.i"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2/out/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2/lib/ArrayInt100.cpp > CMakeFiles/ArrayInt100.dir/ArrayInt100.cpp.i

lib/CMakeFiles/ArrayInt100.dir/ArrayInt100.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ArrayInt100.dir/ArrayInt100.cpp.s"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2/out/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2/lib/ArrayInt100.cpp -o CMakeFiles/ArrayInt100.dir/ArrayInt100.cpp.s

# Object files for target ArrayInt100
ArrayInt100_OBJECTS = \
"CMakeFiles/ArrayInt100.dir/ArrayInt100.cpp.o"

# External object files for target ArrayInt100
ArrayInt100_EXTERNAL_OBJECTS =

lib/libArrayInt100.a: lib/CMakeFiles/ArrayInt100.dir/ArrayInt100.cpp.o
lib/libArrayInt100.a: lib/CMakeFiles/ArrayInt100.dir/build.make
lib/libArrayInt100.a: lib/CMakeFiles/ArrayInt100.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libArrayInt100.a"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2/out/lib && $(CMAKE_COMMAND) -P CMakeFiles/ArrayInt100.dir/cmake_clean_target.cmake
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2/out/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ArrayInt100.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/ArrayInt100.dir/build: lib/libArrayInt100.a

.PHONY : lib/CMakeFiles/ArrayInt100.dir/build

lib/CMakeFiles/ArrayInt100.dir/clean:
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2/out/lib && $(CMAKE_COMMAND) -P CMakeFiles/ArrayInt100.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/ArrayInt100.dir/clean

lib/CMakeFiles/ArrayInt100.dir/depend:
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2/out && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2 /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2/lib /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2/out /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2/out/lib /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/7.2/out/lib/CMakeFiles/ArrayInt100.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/ArrayInt100.dir/depend
