##
#   CmakeLists.txt for linked list
#   Version: 0.0.1
#   
#

# Project Name
set (PRO_NAME linked_list)
set (LIB_NAME linkedlist)

# Include Directory
set (INC_DIR include/)
set (SRC_DIR ../src/)
set (EXE_DIR ../exe/)

# Include SRC Directories

set ( SRC_FILES 
    "${SRC_DIR}/linked_delete.c"
    "${SRC_DIR}/lnklst_insert.c"
    "${SRC_DIR}/linked_print.c"
    "${SRC_DIR}/lnklst_support.c"
    "${SRC_DIR}/linked_search.c"
    "${SRC_DIR}/linked_reverse.c"
    "${SRC_DIR}/linked_sort_inc_lexo.c"
)

#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")
#set(CMAKE_CXX_FLAGS “${CMAKE_CXX_FLAGS} -Wall”)
ADD_DEFINITIONS( -Wall)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories(${INC_DIR})
cmake_minimum_required (VERSION 2.6)
project (${PRO_NAME})
add_library (${LIB_NAME} SHARED ${SRC_FILES})
add_executable(${PRO_NAME} ${EXE_DIR}/linked_list.c)
target_link_libraries(${PRO_NAME} ${LIB_NAME})
