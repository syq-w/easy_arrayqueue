cmake_minimum_required(VERSION 3.0.0)
project(datastructure)

set(QUEUEFOLDER ${PROJECT_SOURCE_DIR}/Queue)
set(LINEARTABLE ${PROJECT_SOURCE_DIR}/Lineartable)
set(MATRIX ${PROJECT_SOURCE_DIR}/Matrix)
set(STACK ${PROJECT_SOURCE_DIR}/Stack)
set(DICTIONARY ${PROJECT_SOURCE_DIR}/Dictionary)
set(TREE ${PROJECT_SOURCE_DIR}/Tree)

set(RELY ${PROJECT_SOURCE_DIR}/Rely)

include_directories(${RELY} ${QUEUEFOLDER} ${LINEARTABLE} ${MATRIX}
 ${STACK} ${DICTIONARY} ${TREE})

add_executable(${PROJECT_NAME} main.cpp)





