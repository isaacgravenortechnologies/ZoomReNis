# ZoomReNis
 Re-engineering Zoombinis (Steam remake version) using the same assets. Assets will come in a 7z file that will be decrypted using a hash from the game exe. This engine should run much faster than Unity since it is so much more optimized and streamlined to the requirements of the game. Also, this engine should be portable to virtually anything, because it is made in C and should never really become outdated. Also, the planned API will allow modders to create new puzzles and maybe even entire game sequels! :D

## Future plans/to-do list
- Complete engine, near (if not exactly) identical user experience to original Unity remake.  
- Engine running faster than Unity  
- Higher FPS  
- Debug features  
- Modding API  
- Support for new games as mods to the binary (take the original Portal game to Half-Life 2/Source Engine for example)  
- Ported engine to multiple platforms  
- Easy-to-use buildsystem (maybe using makefiles)  
- Easy asset extraction from Steam installation  
  
## Requirements and Dependencies
- `build-essential` package on Linux or MinGW on Windows should do the trick, `lib/libraylib.a` might need recompiling manually from raylib repository, **remember to add JPG support! (remove the `//` before the ``//#define SUPPORT_FILEFORMAT_JPG`` on line 153 and run `make` for Linux, can be `mingw32/64-make`` (depending on the one you installed on Windows. )**  
  
- Steam copy of Zoombinis purchased and downloaded.
  
- SHA-256 of `Zoombinis.exe` from Steam install, use [this tool](https://emn178.github.io/online-tools/sha256_checksum.html) to obtain this. 
   
- Raylib header file from [here](https://github.com/raysan5/raylib/blob/master/src/raylib.h/) (download and put in `include` folder)  
  
## Installation
- Decrypt `zoombinis.7z`, with the SHA-256 of `Zoombinis.exe` from Steam install, and extract so that `zoombinis` folder containing `movie` subdirectory is in the root of this repository. This is the `zoombinis` game, the default one in the engine, which uses assets from the original Unity remake.  
- Next, run `build.bat` if you're on Windows, or `build.sh` on Linux.  
- Then run `main.exe` (Windows) or just `main` for Linux (might need `chmod` to be run first)  
  
## Troubleshooting
***I'm getting an error involving raylib.***
> Try using [raylib 5.0 source code](https://github.com/raysan5/raylib/blob/ae50bfa2cc569c0f8d5bc4315d39db64005b1b08/src/raylib.h)  
  
***I'm getting an error involving gcc itself.***
> Try reinstalling, or compiling in a VM.  
  
***My issue isn't listed/the fixes here didn't work.***
> Please write a GitHub issue reporting the bug, the environment and the various tool versions, and I will try to get back to you about fixing your problem.  
