cmake_minimum_required(VERSION 2.8)

project(2labaRaspberry)
set(SRC_EXE main.cpp) #Определение переменной исходников основного проекта
set(SRC_LIB Tsezar.cpp) #Определение переменной исходников main.cpp
set(HEADERS_LIB Tsezar.h) #Определение переменной заголовочников библиотеки
add_library(TsezarLib STATIC ${SRC_LIB} ${HEADERS_LIB})#Создание библиотеки
add_executable(${PROJECT_NAME} ${SRC_EXE})
target_link_libraries(${PROJECT_NAME} TsezarLib)#Статическая линковка
