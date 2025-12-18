cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

# Добавить все .cpp файлы
file(GLOB SOURCES "*.cpp")
file(GLOB HEADERS "*.h")

# Создать исполняемый файл
add_executable(MyProject ${SOURCES} ${HEADERS})