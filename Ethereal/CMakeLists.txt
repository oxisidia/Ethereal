#Find the Eigen library.
find_package(Eigen3 3.3 REQUIRED PATHS ../../Libraires/eigen-3.3.9/cmake) 

# Set SOURCES variable
set(SOURCES Ethereal.cpp)

# Set HEADERS_PUBLIC variable (public headers, included in the library)
set(HEADERS_PUBLIC Ethereal.h)

# Set HEADERS_PRIVATE variable, if needed.
# (these private headers won't be included in the library)
# set(HEADERS_PRIVATE
#     foo_private.h
# )

include(${PROJECT_SOURCE_DIR}/cmake/LibraryConfig.cmake)