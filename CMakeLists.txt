# version to be used
cmake_minimum_required(VERSION 3.12)

# Set program name
set(BINARY_NAME "CXX-Practice")

# Initialize all project details
project(${BINARY_NAME} 
	VERSION 0.0.1 
	DESCRIPTION "project to practice C++, git & CMake "
	LANGUAGES CXX
)

# Link all subdirectories
add_subdirectory(src)

# Link to created object files for source files
# target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE src)

# Create project target
add_executable(${BINARY_NAME} main.cpp)

# Disable in-source builds
if(PROJECT_BINARY_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
	message(FATAL "ERROR: in-source builds not allowed")
endif()

# Link include folder containing header files
target_include_directories(${BINARY_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

message("${PROJECT_BINARY_DIR}")
message("${INCLUDE_DIRECTORIES}")
message("${PROJECT_SOURCE_DIR}")