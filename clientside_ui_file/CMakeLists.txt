cmake_minimum_required(VERSION 3.5)

project(clientside_ui_file VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        clientwindow.h
        clientwindow.ui
        clientwindow.cpp
        withdraw.h
        withdraw.cpp
        withdraw.ui
        restock.cpp
        restock.h
        restock.ui
        itembasket.cpp
        itembasket.h
        itembasket.ui
        restockbasket.cpp
        restockbasket.h
        restockbasket.ui
        clickable.h
        clickable.cpp
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(clientside_ui_file
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(clientside_ui_file SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(clientside_ui_file
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(clientside_ui_file PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Sql
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_finalize_executable(clientside_ui_file)
endif()

set_target_properties(clientside_ui_file PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER "my.example.com"
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}"
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS clientside_ui_file
    RUNTIME DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    BUNDLE DESTINATION .
)
