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
- Simple know-how of (and access to) command-line on PC, no admin rights required to build this project, but they may be needed to install its dependencies if you don't have them installed already.  
  
- Git installed, run ``git`` command to make sure it is installed and on PATH.  
  
- `build-essential` package on Linux, otherwise MinGW on Windows should do the trick.  
  
- Steam copy of Zoombinis purchased and downloaded.
  
- SHA-256 of `Zoombinis.exe` from Steam install, use [this tool](https://emn178.github.io/online-tools/sha256_checksum.html) to obtain this. 
  
## Installation
- Open a command prompt (type ``cmd`` in Windows search if on Windows, open Terminal on Linux).  
- Git clone this repository with ``git clone --recursive https://github.com/isaacgravenortechnologies/ZoomReNis.git``  
- Enter newly created ``ZoomReNis`` directory.  
- Decrypt `zoombinis.7z`, with the SHA-256 of `Zoombinis.exe` from Steam install, and extract so that `zoombinis` folder containing `movie` subdirectory is in the root of this repository. This is the `zoombinis` game, the default one in the engine, which uses assets from the original Unity remake.  
- Next, run `build.bat` if you're on Windows, or `build.sh` on Linux.  
- Then run `main.exe` (Windows) or just `main` for Linux (might need `chmod` to be run first)  
  
## Troubleshooting
***I'm getting an error involving raylib.***
> Try updating git submodules with ``git submodule update --recursive``
***I'm getting an error involving gcc itself.***
> Try reinstalling, or compiling in a VM.  

***I get a compilation error related to Raylib and ``rtextures.c``. What do I do?***  
> Please notify me by writing an issue noting that the current raylib patch is out of date, or work out how to add JPG support to raylib and how to compile it yourself.
  
***My issue isn't listed/the fixes here didn't work.***
> Please write a GitHub issue reporting the bug, the environment and the various tool versions, and I will try to get back to you about fixing your problem.
  
