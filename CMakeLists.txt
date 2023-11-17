cmake_minimum_required(VERSION 3.26)
project(C1)

set(CMAKE_CXX_STANDARD 14)

add_executable(C1 main.cpp
        base/PtrMus.cpp
        base/PtrMus.h
        high/Line.cpp
        high/Line.h
        high/friend/Box.cpp
        high/friend/Box.h
        high/friend/BigBox.cpp
        high/friend/BigBox.h
        high/MixState/Shape.cpp
        high/MixState/Shape.h
        high/MixState/Rectangle.cpp
        high/MixState/Rectangle.h
        high/MixState/Triangle.cpp
        high/MixState/Triangle.h
        file/FileRead.cpp
        file/FileRead.h
        template/Stack.cpp
        template/Stack.h
        signal/SingalPro.cpp
        signal/SingalPro.h
        thread/CThread.cpp
        thread/CThread.h)

add_compile_options("$<$<CXX_COMPILER_ID:GNU>:-fexec-charset=UTF-8>")