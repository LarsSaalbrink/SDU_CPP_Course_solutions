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
CMAKE_SOURCE_DIR = /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2/out

# Include any dependencies generated for this target.
include lib/CMakeFiles/Safety.dir/depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/Safety.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/Safety.dir/flags.make

lib/CMakeFiles/Safety.dir/Safety.cpp.o: lib/CMakeFiles/Safety.dir/flags.make
lib/CMakeFiles/Safety.dir/Safety.cpp.o: ../lib/Safety.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/Safety.dir/Safety.cpp.o"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2/out/lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Safety.dir/Safety.cpp.o -c /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2/lib/Safety.cpp

lib/CMakeFiles/Safety.dir/Safety.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Safety.dir/Safety.cpp.i"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2/out/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2/lib/Safety.cpp > CMakeFiles/Safety.dir/Safety.cpp.i

lib/CMakeFiles/Safety.dir/Safety.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Safety.dir/Safety.cpp.s"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2/out/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2/lib/Safety.cpp -o CMakeFiles/Safety.dir/Safety.cpp.s

# Object files for target Safety
Safety_OBJECTS = \
"CMakeFiles/Safety.dir/Safety.cpp.o"

# External object files for target Safety
Safety_EXTERNAL_OBJECTS =

lib/libSafety.a: lib/CMakeFiles/Safety.dir/Safety.cpp.o
lib/libSafety.a: lib/CMakeFiles/Safety.dir/build.make
lib/libSafety.a: lib/CMakeFiles/Safety.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libSafety.a"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2/out/lib && $(CMAKE_COMMAND) -P CMakeFiles/Safety.dir/cmake_clean_target.cmake
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2/out/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Safety.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/Safety.dir/build: lib/libSafety.a

.PHONY : lib/CMakeFiles/Safety.dir/build

lib/CMakeFiles/Safety.dir/clean:
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2/out/lib && $(CMAKE_COMMAND) -P CMakeFiles/Safety.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/Safety.dir/clean

lib/CMakeFiles/Safety.dir/depend:
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2/out && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2 /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2/lib /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2/out /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2/out/lib /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/4.2/out/lib/CMakeFiles/Safety.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/Safety.dir/depend

