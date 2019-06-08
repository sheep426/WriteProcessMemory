![OS](https://img.shields.io/badge/Tested%20On-Windows-yellowgreen.svg?style=flat-square) 

# WriteProcessMemory

This is a simple C++ game hacking (memory editing), This will edit the memory address, for example (0x66B6B6) in the wanted window
 
## Installation [Windows](https://wikipedia.org/wiki/Microsoft_Windows)[![alt tag](http://icons.iconarchive.com/icons/yootheme/social-bookmark/32/social-windows-button-icon.png)](https://fr.wikipedia.org/wiki/Microsoft_Windows)

- Download C++ IDE Like [DEV-C++](https://sourceforge.net/projects/orwelldevcpp/)

- Open the source code of WriteProcessMemory Hack... go to the line 9 and you will find ```HWND hWnd = FindWindow(0, "Window Name");``` change ```"Window Name"``` to the game that you want to hack... for example ```HWND hWnd = FindWindow(0, "Counter-Strike");```

- After that, you will need ```Cheat Engine``` to find the memory adress... you can download ```Cheat Engine``` [from here](https://www.cheatengine.org/downloads.php)

- Then go to the line 29 and you will find this ```if(WriteProcessMemory(hProcess, (LPVOID)0x235EC8, &newdata, newdatasize, NULL))```, all we have to change is this ```"0x235EC8"```, here we put the new memory adress

- You can change ```int newdata = 0;``` to anything you want... for example (float newdata = 0;)

- Compile ```WriteProcessMemory Hack.cpp``` to ```WriteProcessMemory Hack.exe``` and enjoy game hakcing!

## Usage

Open ```WriteProcessMemory Hack.exe```, its will automaticly ask you for the new value, all you have to do is to entre the new value that you want (don't forget to confige the cheat first)

# Connect society with badiiiro :kissing_heart:

- Facebook: (https://www.facebook.com/badiiiro/)
- Instagram: (https://www.instagram.com/badiiiro0/)
- Twitter: (https://twitter.com/badiiiro)
- Youtube: (https://www.youtube.com/badiiiro/)
- Twitch: (https://www.twitch.tv/badiiiro/)
- Steam: (https://steamcommunity.com/id/badiiiro/)
- Discord Server: (https://discord.gg/Pzzsd3J)

# Donate
- Payoneer = badroiv@gmail.com

# NOTE
- I am NOT responsible for anything that can be made or any use of it! It was created for educational purpouses only (use it by your own risk), Thank you all.
