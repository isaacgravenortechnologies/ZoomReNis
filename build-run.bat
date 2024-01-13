@echo off
copy jpgsupport.patch .\raylib
cd ./raylib
git apply jpgsupport.patch
cd ./src
make
cd ../../
gcc *.c -o main -O1 -Wall -std=c99 -Wno-missing-braces -L ./raylib/src -lraylib -lopengl32 -lgdi32 -lwinmm -Iinclude -I./raylib/src/
main
