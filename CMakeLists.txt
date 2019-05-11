cmake_minimum_required(VERSION 3.14)
project(04_CollecBR)

set(CMAKE_CXX_STANDARD 17)

add_executable(04_CollecBR main.cpp)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Widgets)

# deploy // copy Qt dlls to executable directory
get_target_property(QT5_QMAKE_EXECUTABLE Qt5::qmake IMPORTED_LOCATION)
get_filename_component(QT5_WINDEPLOYQT_EXECUTABLE ${QT5_QMAKE_EXECUTABLE} PATH)
set(QT5_WINDEPLOYQT_EXECUTABLE "${QT5_WINDEPLOYQT_EXECUTABLE}/windeployqt.exe")
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${QT5_WINDEPLOYQT_EXECUTABLE} --qmldir ${CMAKE_SOURCE_DIR} $<TARGET_FILE_DIR:${PROJECT_NAME}> DEPENDS ${PROJECT_NAME})
