# Compiles files into a src object library
list(APPEND CMAKE_MESSAGE_CONTEXT "LIB")
message(STATUS "CREATING: SRC_OBJECT") # trace configuration step

add_library(src OBJECT
	leetcode.cpp
	basic_classes.cpp
	codezclub.cpp
	pointers.cpp
)

target_include_directories(src PUBLIC ../include/)

# what was I thinking adding this line here ???
# target_link_directories(src PUBLIC .)
