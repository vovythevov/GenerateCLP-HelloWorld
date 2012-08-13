project(SauronIncompleteSong)
cmake_minimum_required(VERSION 2.8)

#Find packages
find_package(GenerateCLP REQUIRED)
include(${GenerateCLP_USE_FILE})

set(SauronIncompleteSong_SOURCE SauronIncompleteSong.cxx)
generateclp(SauronIncompleteSong_SOURCE SauronIncompleteSong.xml)

add_executable (SauronIncompleteSong SauronIncompleteSong.cxx)
  