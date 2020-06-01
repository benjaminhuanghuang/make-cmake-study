

## Method 1: Use full path
```
  set(my_lib /home/projects/hello/bin/lib)

  target_link_libraries(${PROJECT_NAME} ${my_lib}/hello.a)
```

## Method 2: Install
Install lib to /usr or /usr/local
```
  set(CMAKE_INSTALL_PREFIX /usr)


  install(FILES include/hello.h DESTINATION include)
```

import
```
  include_directories(/usr/include)
  target_link_libraries(${PROJECT_NAME} /usr/lib/)
```
 
## Method 3: find_package
Findxxx.cmake
xxxConfig.cmake

- The variables
``` 
if(<NAME>_FOUND)

find_path(<NAME>_INCLUDES)

find_library(<NAME>_LIBS)
```

- Sample 1
```
find_package(hello_lib REQUIRED)

if(hello_lib_FOUND)
  target_link_libraries(${PROJECT_NAME} hello_lib_LIBRARY)

endif(hello_lib_FOUND)
```