# Add source files
set(SRC_FILES
    Mood.cpp
    Window.cpp
)

# Add header files (optional, for IDEs)
set(HEADER_FILES
    Mood.h
    Window.h
)

# Create a library target
add_library(src_lib ${SRC_FILES} ${HEADER_FILES})

# Link Qt libraries to the src_lib
target_link_libraries(src_lib PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets)

# Include directories for the library
target_include_directories(src_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})