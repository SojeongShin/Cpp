# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sojeongshin/CLionProjects/Project4_12

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sojeongshin/CLionProjects/Project4_12/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Project4_12.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Project4_12.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project4_12.dir/flags.make

CMakeFiles/Project4_12.dir/main.cpp.o: CMakeFiles/Project4_12.dir/flags.make
CMakeFiles/Project4_12.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sojeongshin/CLionProjects/Project4_12/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project4_12.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project4_12.dir/main.cpp.o -c /Users/sojeongshin/CLionProjects/Project4_12/main.cpp

CMakeFiles/Project4_12.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project4_12.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sojeongshin/CLionProjects/Project4_12/main.cpp > CMakeFiles/Project4_12.dir/main.cpp.i

CMakeFiles/Project4_12.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project4_12.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sojeongshin/CLionProjects/Project4_12/main.cpp -o CMakeFiles/Project4_12.dir/main.cpp.s

# Object files for target Project4_12
Project4_12_OBJECTS = \
"CMakeFiles/Project4_12.dir/main.cpp.o"

# External object files for target Project4_12
Project4_12_EXTERNAL_OBJECTS =

Project4_12: CMakeFiles/Project4_12.dir/main.cpp.o
Project4_12: CMakeFiles/Project4_12.dir/build.make
Project4_12: CMakeFiles/Project4_12.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sojeongshin/CLionProjects/Project4_12/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Project4_12"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project4_12.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project4_12.dir/build: Project4_12
.PHONY : CMakeFiles/Project4_12.dir/build

CMakeFiles/Project4_12.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project4_12.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project4_12.dir/clean

CMakeFiles/Project4_12.dir/depend:
	cd /Users/sojeongshin/CLionProjects/Project4_12/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sojeongshin/CLionProjects/Project4_12 /Users/sojeongshin/CLionProjects/Project4_12 /Users/sojeongshin/CLionProjects/Project4_12/cmake-build-debug /Users/sojeongshin/CLionProjects/Project4_12/cmake-build-debug /Users/sojeongshin/CLionProjects/Project4_12/cmake-build-debug/CMakeFiles/Project4_12.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project4_12.dir/depend

