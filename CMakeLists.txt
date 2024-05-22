# version to be used
cmake_minimum_required(VERSION 3.12)

# Initialize all project details
project(C-Practice CXX)

# Create project target
add_executable(${CMAKE_PROJECT_NAME} main.cpp)

# Disable in-source builds
if(CMAKE_PROJECT_DIR STREQUAL CMAKE_BUILD_DIR)
	message(FATAL "ERROR: in-source builds not allowed")
endif()

# Links include folder with header files
include_directories(include)

# Link all subdirectories
add_subdirectory(src)

# Link to created object files for source files
# target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE src)
