# version to be used
cmake_minimum_required(VERSION 3.12)

message(AUTHOR_WARNING "__EXECUTIN_SRC__")

# Set program name
set(BINARY_NAME "CXX-Practice")

###### SYSTEM ENQUIRIES #######

message(STATUS "${CMAKE_HOST_SYSTEM_NAME} ${CMAKE_HOST_SYSTEM_VERSION} OS detected")

###### END SYSTEM ENQUIRIES #######

# Initialize all project details
project(${BINARY_NAME} 
	VERSION 0.0.1 
	DESCRIPTION "Project to practice C++, git & CMake... but mostly C++ "
	LANGUAGES CXX
)

# Disable in-source builds
if(PROJECT_BINARY_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
	message(FATAL "ERROR: in-source builds not allowed")
endif()

# Link all subdirectories
add_subdirectory(src)

# Link to created object files for source files
# target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE src)

# Create project target
add_executable(${BINARY_NAME} main.cpp)


# Link include folder containing header files
target_include_directories(${BINARY_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Add object file to target as the files in include depend on it
target_link_libraries(${BINARY_NAME} PUBLIC src)

message("${PROJECT_BINARY_DIR}")
message("${INCLUDE_DIRECTORIES}")
message("${PROJECT_SOURCE_DIR}")