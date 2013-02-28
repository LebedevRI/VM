project(vm)

add_executable(vm main.cpp)

install(TARGETS vm RUNTIME DESTINATION bin)
