project(minerd)

add_subdirectory(curl)

add_library(minerd

        SHARED

        elist.h miner.h compat.h cpu-miner.h
        cpu-miner.c util.c
        sha2.c scrypt.c
        sha2-arm.S scrypt-arm.S
        compat/jansson/hashtable.c
        compat/jansson/dump.c
        compat/jansson/load.c
        compat/jansson/strbuffer.c
        compat/jansson/utf.c
        compat/jansson/value.c
        ../native-lib.h
        )

find_library( # Sets the name of the path variable.
        log-lib
        # Specifies the name of the NDK library that
        # you want CMake to locate.
        log )
#include_directories(curl/include)
target_link_libraries(minerd PUBLIC libcurl ${log-lib} android)

target_include_directories(minerd PUBLIC
                            curl/include
                            compat/jansson
                            ../native-lib
                            )
#add_dependencies(minerd curl)
#include_directories(curl)