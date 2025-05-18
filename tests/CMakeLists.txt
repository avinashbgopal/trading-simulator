enable_testing()

# Download and unpack GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

# Add the test executable
file(GLOB TEST_SOURCES "*.cpp")
add_executable(runTests ${TEST_SOURCES})
target_link_libraries(runTests gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)
