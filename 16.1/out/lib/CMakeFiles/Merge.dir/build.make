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
CMAKE_SOURCE_DIR = /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1/out

# Include any dependencies generated for this target.
include lib/CMakeFiles/Merge.dir/depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/Merge.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/Merge.dir/flags.make

lib/CMakeFiles/Merge.dir/Merge.cpp.o: lib/CMakeFiles/Merge.dir/flags.make
lib/CMakeFiles/Merge.dir/Merge.cpp.o: ../lib/Merge.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/Merge.dir/Merge.cpp.o"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1/out/lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Merge.dir/Merge.cpp.o -c /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1/lib/Merge.cpp

lib/CMakeFiles/Merge.dir/Merge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Merge.dir/Merge.cpp.i"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1/out/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1/lib/Merge.cpp > CMakeFiles/Merge.dir/Merge.cpp.i

lib/CMakeFiles/Merge.dir/Merge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Merge.dir/Merge.cpp.s"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1/out/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1/lib/Merge.cpp -o CMakeFiles/Merge.dir/Merge.cpp.s

# Object files for target Merge
Merge_OBJECTS = \
"CMakeFiles/Merge.dir/Merge.cpp.o"

# External object files for target Merge
Merge_EXTERNAL_OBJECTS =

lib/libMerge.a: lib/CMakeFiles/Merge.dir/Merge.cpp.o
lib/libMerge.a: lib/CMakeFiles/Merge.dir/build.make
lib/libMerge.a: lib/CMakeFiles/Merge.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMerge.a"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1/out/lib && $(CMAKE_COMMAND) -P CMakeFiles/Merge.dir/cmake_clean_target.cmake
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1/out/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Merge.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/Merge.dir/build: lib/libMerge.a

.PHONY : lib/CMakeFiles/Merge.dir/build

lib/CMakeFiles/Merge.dir/clean:
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1/out/lib && $(CMAKE_COMMAND) -P CMakeFiles/Merge.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/Merge.dir/clean

lib/CMakeFiles/Merge.dir/depend:
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1/out && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1 /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1/lib /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1/out /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1/out/lib /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/16.1/out/lib/CMakeFiles/Merge.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/Merge.dir/depend

