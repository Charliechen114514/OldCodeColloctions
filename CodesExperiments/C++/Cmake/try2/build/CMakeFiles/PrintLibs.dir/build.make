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
CMAKE_SOURCE_DIR = /home/charliechen114514/LocalGitProject/C++/Cmake/try2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/charliechen114514/LocalGitProject/C++/Cmake/try2/build

# Include any dependencies generated for this target.
include CMakeFiles/PrintLibs.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/PrintLibs.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/PrintLibs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PrintLibs.dir/flags.make

CMakeFiles/PrintLibs.dir/libsrc/printLibs.cpp.o: CMakeFiles/PrintLibs.dir/flags.make
CMakeFiles/PrintLibs.dir/libsrc/printLibs.cpp.o: ../libsrc/printLibs.cpp
CMakeFiles/PrintLibs.dir/libsrc/printLibs.cpp.o: CMakeFiles/PrintLibs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/charliechen114514/LocalGitProject/C++/Cmake/try2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PrintLibs.dir/libsrc/printLibs.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PrintLibs.dir/libsrc/printLibs.cpp.o -MF CMakeFiles/PrintLibs.dir/libsrc/printLibs.cpp.o.d -o CMakeFiles/PrintLibs.dir/libsrc/printLibs.cpp.o -c /home/charliechen114514/LocalGitProject/C++/Cmake/try2/libsrc/printLibs.cpp

CMakeFiles/PrintLibs.dir/libsrc/printLibs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PrintLibs.dir/libsrc/printLibs.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/charliechen114514/LocalGitProject/C++/Cmake/try2/libsrc/printLibs.cpp > CMakeFiles/PrintLibs.dir/libsrc/printLibs.cpp.i

CMakeFiles/PrintLibs.dir/libsrc/printLibs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PrintLibs.dir/libsrc/printLibs.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/charliechen114514/LocalGitProject/C++/Cmake/try2/libsrc/printLibs.cpp -o CMakeFiles/PrintLibs.dir/libsrc/printLibs.cpp.s

CMakeFiles/PrintLibs.dir/libsrc/printNNums.cpp.o: CMakeFiles/PrintLibs.dir/flags.make
CMakeFiles/PrintLibs.dir/libsrc/printNNums.cpp.o: ../libsrc/printNNums.cpp
CMakeFiles/PrintLibs.dir/libsrc/printNNums.cpp.o: CMakeFiles/PrintLibs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/charliechen114514/LocalGitProject/C++/Cmake/try2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PrintLibs.dir/libsrc/printNNums.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PrintLibs.dir/libsrc/printNNums.cpp.o -MF CMakeFiles/PrintLibs.dir/libsrc/printNNums.cpp.o.d -o CMakeFiles/PrintLibs.dir/libsrc/printNNums.cpp.o -c /home/charliechen114514/LocalGitProject/C++/Cmake/try2/libsrc/printNNums.cpp

CMakeFiles/PrintLibs.dir/libsrc/printNNums.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PrintLibs.dir/libsrc/printNNums.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/charliechen114514/LocalGitProject/C++/Cmake/try2/libsrc/printNNums.cpp > CMakeFiles/PrintLibs.dir/libsrc/printNNums.cpp.i

CMakeFiles/PrintLibs.dir/libsrc/printNNums.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PrintLibs.dir/libsrc/printNNums.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/charliechen114514/LocalGitProject/C++/Cmake/try2/libsrc/printNNums.cpp -o CMakeFiles/PrintLibs.dir/libsrc/printNNums.cpp.s

# Object files for target PrintLibs
PrintLibs_OBJECTS = \
"CMakeFiles/PrintLibs.dir/libsrc/printLibs.cpp.o" \
"CMakeFiles/PrintLibs.dir/libsrc/printNNums.cpp.o"

# External object files for target PrintLibs
PrintLibs_EXTERNAL_OBJECTS =

libPrintLibs.a: CMakeFiles/PrintLibs.dir/libsrc/printLibs.cpp.o
libPrintLibs.a: CMakeFiles/PrintLibs.dir/libsrc/printNNums.cpp.o
libPrintLibs.a: CMakeFiles/PrintLibs.dir/build.make
libPrintLibs.a: CMakeFiles/PrintLibs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/charliechen114514/LocalGitProject/C++/Cmake/try2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libPrintLibs.a"
	$(CMAKE_COMMAND) -P CMakeFiles/PrintLibs.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PrintLibs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PrintLibs.dir/build: libPrintLibs.a
.PHONY : CMakeFiles/PrintLibs.dir/build

CMakeFiles/PrintLibs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PrintLibs.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PrintLibs.dir/clean

CMakeFiles/PrintLibs.dir/depend:
	cd /home/charliechen114514/LocalGitProject/C++/Cmake/try2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/charliechen114514/LocalGitProject/C++/Cmake/try2 /home/charliechen114514/LocalGitProject/C++/Cmake/try2 /home/charliechen114514/LocalGitProject/C++/Cmake/try2/build /home/charliechen114514/LocalGitProject/C++/Cmake/try2/build /home/charliechen114514/LocalGitProject/C++/Cmake/try2/build/CMakeFiles/PrintLibs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PrintLibs.dir/depend

