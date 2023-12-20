@echo off
TASKKILL /F /IM aces.exe
set STEAM_PATH="C:\Program Files (x86)\Steam"
set GAME_ID=236390
tasklist /FI "IMAGENAME eq steam.exe" 2>NUL | find /I /N "steam.exe">NUL
if "%ERRORLEVEL%"=="0" (
    start "" %STEAM_PATH%\steam.exe -applaunch %GAME_ID%
) else (
    start "" %STEAM_PATH%\steam.exe -applaunch %GAME_ID%
)
exit