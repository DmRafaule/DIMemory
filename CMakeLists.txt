cmake_minimum_required(VERSION 3.5)
project(DIMemory VERSION 0.1 DESCRIPTION "Memory managment module" LANGUAGES CXX)


file( GLOB SOURCES **.cpp )

SetFlags()
SetLibraries( )
CreateLibrary( ${PROJECT_NAME} )