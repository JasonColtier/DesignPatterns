cmake_minimum_required(VERSION 3.2)

project(StateMachine VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

set(HEADER_DIR StateMachine/Include)
set(SOURCE_DIR StateMachine/Source)

set(HEADERS
        ${HEADER_DIR}/IState.h
        ${HEADER_DIR}/MachineCommands.h
        ${HEADER_DIR}/Idle.h
        ${HEADER_DIR}/Attack.h
        ${HEADER_DIR}/Hero.h
        ${HEADER_DIR}/Machine.h
        ${HEADER_DIR}/HeroMachine.h

        ${HEADER_DIR}/Patrol.h
        ${HEADER_DIR}/Shoot.h
        ${HEADER_DIR}/Reload.h
        ${HEADER_DIR}/Hide.h
        ${HEADER_DIR}/Odometric.h
        ${HEADER_DIR}/Signal.h

        )

set(SOURCES
        ${SOURCE_DIR}/StateMachine.cpp
        ${SOURCE_DIR}/Attack.cpp
        ${SOURCE_DIR}/Idle.cpp
        ${SOURCE_DIR}/Patrol.cpp
        ${SOURCE_DIR}/Shoot.cpp
        ${SOURCE_DIR}/Reload.cpp
        ${SOURCE_DIR}/Hide.cpp
        )

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
target_include_directories(${PROJECT_NAME}
        PUBLIC
        ${HEADER_DIR}
        )