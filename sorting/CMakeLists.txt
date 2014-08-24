##
#   CmakeLists.txt file to learn CMake
#   Change Log :
#       Version:0.0.2
#           Generates a shared library, executable and links them
#           files
#       Version: 0.0.1
#           First version. generates a executable named hello from helo.c
#   
#

# Project Name
set (PRO_NAME sorting)
set (LIB_NAME sort)

# Include Directory
set (INC_DIR include/)
set (SRC_DIR ../src/)

# Include SRC Directories

set ( SRC_FILES 
    "${SRC_DIR}/srt_support.c"
    "${SRC_DIR}/srt_insertion_srt.c"
    "${SRC_DIR}/srt_bubble_sort.c"
    "${SRC_DIR}/srt_selection_sort.c"
)

ADD_DEFINITIONS(-Wall)
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories(${INC_DIR})
cmake_minimum_required (VERSION 2.6)
project (${PRO_NAME})
add_library (${LIB_NAME} SHARED ${SRC_FILES})
add_executable(${PRO_NAME} ../test/main.c)
target_link_libraries(${PRO_NAME} ${LIB_NAME})
