project(plasma-runner-appinstall)

# Find the required Libaries
find_package(KDE4 REQUIRED)
find_package(QPackageKit REQUIRED)

include(KDE4Defaults)

add_definitions (${QT_DEFINITIONS} ${KDE4_DEFINITIONS})
include_directories(${CMAKE_SOURCE_DIR} ${CMAKE_BINARY_DIR} ${KDE4_INCLUDES} ${QPACKAGEKIT_INCLUDE_DIR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${KDE4_ENABLE_EXCEPTIONS}")

# We add our source code here
set(APPINSTALL_SRCS packageset.cpp appinstall.cpp)

kde4_add_plugin(plasma_runner_appinstall ${APPINSTALL_SRCS})
target_link_libraries(plasma_runner_appinstall ${KDE4_PLASMA_LIBS} ${KDE4_KDEUI_LIBS} ${QPACKAGEKIT_LIB})

install(TARGETS plasma_runner_appinstall
        DESTINATION ${PLUGIN_INSTALL_DIR})

install(FILES plasma-runner-appinstall.desktop
        DESTINATION ${SERVICES_INSTALL_DIR})
