cmake_minimum_required(VERSION 3.10)

# Set some basic project attributes
project (Tests
	VERSION 0.1
	DESCRIPTION "A Hello World Project")


file(GLOB_RECURSE SRC
     "src/*.cpp"
)

# This project will output an executable file
add_executable(${PROJECT_NAME} main.cpp
							${SRC})

target_include_directories(${PROJECT_NAME} PRIVATE header)

# Create a simple configuration header
configure_file(config.h.in config.h)

# Include the configuration header in the build
target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}")
