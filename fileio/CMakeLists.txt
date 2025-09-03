# This is only meant to be included as a subdirectory in another project.

add_library(fileio STATIC fileio.c)
target_include_directories(fileio PUBLIC .)
