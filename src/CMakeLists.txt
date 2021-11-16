# Beginning of CMakeLists.txt for the source directory

add_executable(main
    main.c
    )

target_link_libraries(main PRIVATE
  pico_stdlib
  )
