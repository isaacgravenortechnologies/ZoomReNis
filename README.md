# ZoomReNis
 Re-engineering Zoombinis (Steam remake version) using the same assets. Assets will come in a 7z file that will be decrypted using a hash from the game exe. This engine should run much faster than Unity since it is so much more optimized and streamlined to the requirements of the game. Also, this engine should be portable to virtually anything, because it is made in C and should never really become outdated. Also, the planned API will allow modders to create new puzzles and maybe even entire game sequels! :D
 # Requirements
build-essential package on Linux or MinGW on Windows should do the trick, lib/libraylib.a might need recompiling manually from raysan5/raylib repository, remember to add JPG support!
Steam copy of Zoombinis purchased and downloaded.
SHA-256 of Zoombinis.exe from Steam install, use https://emn178.github.io/online-tools/sha256_checksum.html to do this.
 # Installation
Decrypt resources.7z, with the SHA-256 of Zoombinis.exe from Steam install, and extract so that "resources" folder containing "movie" subdirectory is in the root of this repository. Then, run "build.bat" if you're on windows, or "build.sh" on Linux, and then run "main.exe" (Windows) or just "main" for Linux (might need chmod first)
