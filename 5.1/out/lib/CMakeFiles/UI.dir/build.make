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
CMAKE_SOURCE_DIR = /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1/out

# Include any dependencies generated for this target.
include lib/CMakeFiles/UI.dir/depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/UI.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/UI.dir/flags.make

lib/CMakeFiles/UI.dir/UI.cpp.o: lib/CMakeFiles/UI.dir/flags.make
lib/CMakeFiles/UI.dir/UI.cpp.o: ../lib/UI.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/UI.dir/UI.cpp.o"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1/out/lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UI.dir/UI.cpp.o -c /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1/lib/UI.cpp

lib/CMakeFiles/UI.dir/UI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UI.dir/UI.cpp.i"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1/out/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1/lib/UI.cpp > CMakeFiles/UI.dir/UI.cpp.i

lib/CMakeFiles/UI.dir/UI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UI.dir/UI.cpp.s"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1/out/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1/lib/UI.cpp -o CMakeFiles/UI.dir/UI.cpp.s

# Object files for target UI
UI_OBJECTS = \
"CMakeFiles/UI.dir/UI.cpp.o"

# External object files for target UI
UI_EXTERNAL_OBJECTS =

lib/libUI.a: lib/CMakeFiles/UI.dir/UI.cpp.o
lib/libUI.a: lib/CMakeFiles/UI.dir/build.make
lib/libUI.a: lib/CMakeFiles/UI.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libUI.a"
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1/out/lib && $(CMAKE_COMMAND) -P CMakeFiles/UI.dir/cmake_clean_target.cmake
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1/out/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UI.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/UI.dir/build: lib/libUI.a

.PHONY : lib/CMakeFiles/UI.dir/build

lib/CMakeFiles/UI.dir/clean:
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1/out/lib && $(CMAKE_COMMAND) -P CMakeFiles/UI.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/UI.dir/clean

lib/CMakeFiles/UI.dir/depend:
	cd /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1/out && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1 /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1/lib /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1/out /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1/out/lib /mnt/c/Users/kaasv/Desktop/Opgaver/CPP/Exercises/5.1/out/lib/CMakeFiles/UI.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/UI.dir/depend

