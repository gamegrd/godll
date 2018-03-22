@ECHO OFF
call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" x86
Title Debug
:BEGIN
mkdir build
cd build
mkdir Debug
cd Debug
cmake -D Debug=on ..\..\ -G"NMake Makefiles"
nmake
cd ..\..\
echo %cd%
echo ========================±‡“ÎÕÍ≥…====================
pause
goto BEGIN