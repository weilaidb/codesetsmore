@echo off
echo current path ：%~f0
REM pause
cd /d %~dp0
@echo off

::设置变量
SET LIBROOT=..\..\build-libmock-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\debug
SET INCLUDEROOT=..\..\include
SET DSTROOT=.

del %DSTROOT%\*.dll
del /f /s /q %DSTROOT%\include
REM rd /s/q %DSTROOT%\include
copy /y %LIBROOT%\libmock.dll %DSTROOT%
xcopy %INCLUDEROOT% %DSTROOT%\include /E/H/C/I

REM pause