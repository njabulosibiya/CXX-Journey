# Compile files as library
message(STATUS "### CREATING src OBJECT ###") # trace configuration step

add_library(src OBJECT
	leetcode.cpp
)
target_link_directories(src PUBLIC .)
