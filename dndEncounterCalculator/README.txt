This is a simple program written up in C++ to run a console application.
The IDE used was Visual Studio and the compilation method is CMake.

I created this program to help me calculate whether or not an encounter
planned for a Dungeons & Dragon (dnd or d&d) session was too easy or too
difficult for a given group of players.

There are const int tables located in the playerInfo.h and monsterInfo.h
files to reflect the hardcoded experience values (as listed in dnd resource books).
These are the basis of the calculations, where then the number of players
and number of monsters is taken into account.

The console application takes in a number of user inputs (number of players,
the level of the players, the number of monsters, and the challenge rating or CR
of the monsters). The user can input a combination of monsters and these are all
stored in an array of "pairs" where the number of them and the CR for each are
stored for later calculations.

Once the user has opted to not enter in any more monsters, the application then
calculates the total experience value of the monsters. The total experience for
the monsters is then compared to the thresholds of the players total experience points
to return a final string to state whether the combat is "trivial", "easy",
"medium", "hard", or "deadly".

The user is then prompted to enter in another combination if they so choose, clearing
out the previous monsters storage for the new calculations.