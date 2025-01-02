@echo off
setlocal enabledelayedexpansion
for /l %%i in (1,1,100) do (
    set num=000%%i
    set num=!num:~-3!
    echo. > Bai!num!.cpp
)
echo Da tao xong 100 file Bai001.cpp den Bai100.cpp.
pause
