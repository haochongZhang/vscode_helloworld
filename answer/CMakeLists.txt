add_library(libanswer STATIC answer.cc)
target_include_directories(libanswer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include) 