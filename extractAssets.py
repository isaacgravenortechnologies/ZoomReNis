import urllib.request
import zipfile
import os
def downloadFFmpeg(os):
    if(os=="w"):
        print("Downloading FFmpeg")
        urllib.request.urlretrieve("https://www.gyan.dev/ffmpeg/builds/ffmpeg-release-essentials.zip", "./temp/ffmpeg-release-essentials.zip")
        print("Extracting FFmpeg")
        with zipfile.ZipFile("./temp/ffmpeg-release-essentials.zip", 'r') as zip_ref:
            zip_ref.extractall("./temp/")
        root="./temp/"
        dirlist = [ item for item in os.listdir(root) if os.path.isdir(os.path.join(root, item)) ]
        os.system(os.getcwd()+"/temp/"+dirlist[0]+"/bin/ffmpeg.exe -i "+installDir+" -r 1/1 frame%04d.jpg")
    if(os=="l"):
        print("Downloading FFmpeg")
        urllib.request.urlretrieve("https://www.gyan.dev/ffmpeg/builds/ffmpeg-release-essentials.zip", "./temp/ffmpeg-release-essentials.zip")

print("DO NOT USE! This script is incomplete and may produce unexpected, memory-using or storage eating output.")
exit()
platform=input("Please enter your platform: 'w' for Windows, 'm' for MacOS or 'l' for Linux. other OSes are not currently supported, maybe raise an issue on GitHub.")
installDir=input("Please enter the directory where your Zoombinis Steam install is (Zoombinis.exe/other executable format): ")
downloadFFmpeg(platform.lower())