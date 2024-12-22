add_executable("terminator.exe" "main.cpp")

target_link_libraries("terminator.exe" PUBLIC InputParser)

target_include_directories("terminator.exe" PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/src/InputParser")