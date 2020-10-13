cmake_minimum_required (VERSION 3.8)

project ("ClangTest")

add_executable (ClangTest "${CMAKE_CURRENT_LIST_DIR}/Main.cpp")

set_target_properties (ClangTest PROPERTIES CXX_STANDARD 20)

