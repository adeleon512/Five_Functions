# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2016.3.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2016.3.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Adam\CLionProjects\FIve_Functions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Adam\CLionProjects\FIve_Functions\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FIve_Functions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FIve_Functions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FIve_Functions.dir/flags.make

CMakeFiles/FIve_Functions.dir/main.cpp.obj: CMakeFiles/FIve_Functions.dir/flags.make
CMakeFiles/FIve_Functions.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Adam\CLionProjects\FIve_Functions\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FIve_Functions.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\FIve_Functions.dir\main.cpp.obj -c C:\Users\Adam\CLionProjects\FIve_Functions\main.cpp

CMakeFiles/FIve_Functions.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FIve_Functions.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Adam\CLionProjects\FIve_Functions\main.cpp > CMakeFiles\FIve_Functions.dir\main.cpp.i

CMakeFiles/FIve_Functions.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FIve_Functions.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Adam\CLionProjects\FIve_Functions\main.cpp -o CMakeFiles\FIve_Functions.dir\main.cpp.s

CMakeFiles/FIve_Functions.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/FIve_Functions.dir/main.cpp.obj.requires

CMakeFiles/FIve_Functions.dir/main.cpp.obj.provides: CMakeFiles/FIve_Functions.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\FIve_Functions.dir\build.make CMakeFiles/FIve_Functions.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/FIve_Functions.dir/main.cpp.obj.provides

CMakeFiles/FIve_Functions.dir/main.cpp.obj.provides.build: CMakeFiles/FIve_Functions.dir/main.cpp.obj


# Object files for target FIve_Functions
FIve_Functions_OBJECTS = \
"CMakeFiles/FIve_Functions.dir/main.cpp.obj"

# External object files for target FIve_Functions
FIve_Functions_EXTERNAL_OBJECTS =

FIve_Functions.exe: CMakeFiles/FIve_Functions.dir/main.cpp.obj
FIve_Functions.exe: CMakeFiles/FIve_Functions.dir/build.make
FIve_Functions.exe: CMakeFiles/FIve_Functions.dir/linklibs.rsp
FIve_Functions.exe: CMakeFiles/FIve_Functions.dir/objects1.rsp
FIve_Functions.exe: CMakeFiles/FIve_Functions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Adam\CLionProjects\FIve_Functions\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FIve_Functions.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\FIve_Functions.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FIve_Functions.dir/build: FIve_Functions.exe

.PHONY : CMakeFiles/FIve_Functions.dir/build

CMakeFiles/FIve_Functions.dir/requires: CMakeFiles/FIve_Functions.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/FIve_Functions.dir/requires

CMakeFiles/FIve_Functions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\FIve_Functions.dir\cmake_clean.cmake
.PHONY : CMakeFiles/FIve_Functions.dir/clean

CMakeFiles/FIve_Functions.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Adam\CLionProjects\FIve_Functions C:\Users\Adam\CLionProjects\FIve_Functions C:\Users\Adam\CLionProjects\FIve_Functions\cmake-build-debug C:\Users\Adam\CLionProjects\FIve_Functions\cmake-build-debug C:\Users\Adam\CLionProjects\FIve_Functions\cmake-build-debug\CMakeFiles\FIve_Functions.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FIve_Functions.dir/depend

