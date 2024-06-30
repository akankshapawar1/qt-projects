# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/firstWidget_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/firstWidget_autogen.dir/ParseCache.txt"
  "firstWidget_autogen"
  )
endif()
