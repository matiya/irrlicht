# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_SOURCE_DIR = /home/default/projects/borrar

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/default/projects/borrar/build

# Include any dependencies generated for this target.
include CMakeFiles/borrar.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/borrar.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/borrar.dir/flags.make

CMakeFiles/borrar.dir/src/main.cpp.o: CMakeFiles/borrar.dir/flags.make
CMakeFiles/borrar.dir/src/main.cpp.o: ../src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/default/projects/borrar/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/borrar.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/borrar.dir/src/main.cpp.o -c /home/default/projects/borrar/src/main.cpp

CMakeFiles/borrar.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/borrar.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/default/projects/borrar/src/main.cpp > CMakeFiles/borrar.dir/src/main.cpp.i

CMakeFiles/borrar.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/borrar.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/default/projects/borrar/src/main.cpp -o CMakeFiles/borrar.dir/src/main.cpp.s

CMakeFiles/borrar.dir/src/main.cpp.o.requires:
.PHONY : CMakeFiles/borrar.dir/src/main.cpp.o.requires

CMakeFiles/borrar.dir/src/main.cpp.o.provides: CMakeFiles/borrar.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/borrar.dir/build.make CMakeFiles/borrar.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/borrar.dir/src/main.cpp.o.provides

CMakeFiles/borrar.dir/src/main.cpp.o.provides.build: CMakeFiles/borrar.dir/src/main.cpp.o

# Object files for target borrar
borrar_OBJECTS = \
"CMakeFiles/borrar.dir/src/main.cpp.o"

# External object files for target borrar
borrar_EXTERNAL_OBJECTS =

../bin/borrar: CMakeFiles/borrar.dir/src/main.cpp.o
../bin/borrar: CMakeFiles/borrar.dir/build.make
../bin/borrar: /usr/lib/libIrrlicht.so
../bin/borrar: CMakeFiles/borrar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../bin/borrar"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/borrar.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/borrar.dir/build: ../bin/borrar
.PHONY : CMakeFiles/borrar.dir/build

CMakeFiles/borrar.dir/requires: CMakeFiles/borrar.dir/src/main.cpp.o.requires
.PHONY : CMakeFiles/borrar.dir/requires

CMakeFiles/borrar.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/borrar.dir/cmake_clean.cmake
.PHONY : CMakeFiles/borrar.dir/clean

CMakeFiles/borrar.dir/depend:
	cd /home/default/projects/borrar/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/default/projects/borrar /home/default/projects/borrar /home/default/projects/borrar/build /home/default/projects/borrar/build /home/default/projects/borrar/build/CMakeFiles/borrar.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/borrar.dir/depend

