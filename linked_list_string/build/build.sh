##
#   Build script
#   Change Log :
#       Version: 0.0.1
#           First version. Invokes CMakeLists.txt and cleans up files other than executable
#   
#
cmake ../
make
rm -rf CMakeCache.txt CMakeFiles/ Makefile cmake_install.cmake
echo
echo
ls
#reset
echo 
echo
echo
