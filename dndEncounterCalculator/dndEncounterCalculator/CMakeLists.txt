# CMakeList.txt : CMake project for dndEncounterCalculator, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (dndEncounterCalculator "dndEncounterCalculator.cpp" "dndEncounterCalculator.h" "calculate.cpp" "calculate.h" "playerInfo.h" "monsterInfo.h" "playerInfo.cpp" "monsterInfo.cpp")

# TODO: Add tests and install targets if needed.
