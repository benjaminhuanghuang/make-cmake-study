

if (APPLE)
  include_directories(/usr/local/include)
  link_directories(/usr/local/lib)
endif (APPLE)

message(STATUS "GLFW: ${GLFW3_LIBARAIES}")
message(STATUS "GLEW: ${GLEW_LIBRARIES}")


find_package(SDL2 REQUIRED)

if(SDL2_FOUND)
  message(STATUS "SDL2: ${SDL2_INCLUDE_DIR}")
else()
  message(STATUS "Can not find SDL2") 
endif()