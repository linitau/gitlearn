# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/linita/linita/chap2/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/linita/linita/chap2/catkin_ws/build

# Include any dependencies generated for this target.
include ser_client/CMakeFiles/demo01_ser.dir/depend.make

# Include the progress variables for this target.
include ser_client/CMakeFiles/demo01_ser.dir/progress.make

# Include the compile flags for this target's objects.
include ser_client/CMakeFiles/demo01_ser.dir/flags.make

ser_client/CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.o: ser_client/CMakeFiles/demo01_ser.dir/flags.make
ser_client/CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.o: /home/linita/linita/chap2/catkin_ws/src/ser_client/src/demo01_ser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/linita/linita/chap2/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object ser_client/CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.o"
	cd /home/linita/linita/chap2/catkin_ws/build/ser_client && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.o -c /home/linita/linita/chap2/catkin_ws/src/ser_client/src/demo01_ser.cpp

ser_client/CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.i"
	cd /home/linita/linita/chap2/catkin_ws/build/ser_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/linita/linita/chap2/catkin_ws/src/ser_client/src/demo01_ser.cpp > CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.i

ser_client/CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.s"
	cd /home/linita/linita/chap2/catkin_ws/build/ser_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/linita/linita/chap2/catkin_ws/src/ser_client/src/demo01_ser.cpp -o CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.s

ser_client/CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.o.requires:

.PHONY : ser_client/CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.o.requires

ser_client/CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.o.provides: ser_client/CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.o.requires
	$(MAKE) -f ser_client/CMakeFiles/demo01_ser.dir/build.make ser_client/CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.o.provides.build
.PHONY : ser_client/CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.o.provides

ser_client/CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.o.provides.build: ser_client/CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.o


# Object files for target demo01_ser
demo01_ser_OBJECTS = \
"CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.o"

# External object files for target demo01_ser
demo01_ser_EXTERNAL_OBJECTS =

/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: ser_client/CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.o
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: ser_client/CMakeFiles/demo01_ser.dir/build.make
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /opt/ros/melodic/lib/libroscpp.so
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /opt/ros/melodic/lib/librosconsole.so
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /opt/ros/melodic/lib/librostime.so
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /opt/ros/melodic/lib/libcpp_common.so
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser: ser_client/CMakeFiles/demo01_ser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/linita/linita/chap2/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser"
	cd /home/linita/linita/chap2/catkin_ws/build/ser_client && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/demo01_ser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ser_client/CMakeFiles/demo01_ser.dir/build: /home/linita/linita/chap2/catkin_ws/devel/lib/ser_client/demo01_ser

.PHONY : ser_client/CMakeFiles/demo01_ser.dir/build

ser_client/CMakeFiles/demo01_ser.dir/requires: ser_client/CMakeFiles/demo01_ser.dir/src/demo01_ser.cpp.o.requires

.PHONY : ser_client/CMakeFiles/demo01_ser.dir/requires

ser_client/CMakeFiles/demo01_ser.dir/clean:
	cd /home/linita/linita/chap2/catkin_ws/build/ser_client && $(CMAKE_COMMAND) -P CMakeFiles/demo01_ser.dir/cmake_clean.cmake
.PHONY : ser_client/CMakeFiles/demo01_ser.dir/clean

ser_client/CMakeFiles/demo01_ser.dir/depend:
	cd /home/linita/linita/chap2/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/linita/linita/chap2/catkin_ws/src /home/linita/linita/chap2/catkin_ws/src/ser_client /home/linita/linita/chap2/catkin_ws/build /home/linita/linita/chap2/catkin_ws/build/ser_client /home/linita/linita/chap2/catkin_ws/build/ser_client/CMakeFiles/demo01_ser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ser_client/CMakeFiles/demo01_ser.dir/depend

