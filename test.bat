@ECHO OFF

cmake --build build

cd build\test
ctest
cd ..\..