add_executable("terminator.exe" "main.cpp")


target_include_directories("terminator.exe" PRIVATE
    "${CMAKE_SOURCE_DIR}/include"
    "${CMAKE_SOURCE_DIR}/src/Colors"
)


target_link_libraries("terminator.exe" INTERFACE colors)

target_link_libraries("terminator.exe" PUBLIC Controller)

target_compile_definitions("terminator.exe" PRIVATE CMAKE_SOURCE_DIR="${CMAKE_SOURCE_DIR}")