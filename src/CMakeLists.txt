# Compile files as library
message(AUTHOR_WARNING "__CREATING_src_OBJECT__") # trace configuration step

add_library(src OBJECT
	leetcode.cpp
	basic_classes.cpp
)

target_include_directories(src PUBLIC ../include/)

# what was I thinking adding this line here ???
# target_link_directories(src PUBLIC .)
