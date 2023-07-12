@echo off
set /p BLD=< build
set /a BLD= %BLD%+1
echo %BLD% >build
echo #define APP_BUILD %BLD% >version.h
echo %BLD%