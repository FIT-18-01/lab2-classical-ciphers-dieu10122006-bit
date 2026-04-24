@echo off
REM Compile Caesar Cipher
echo Compiling Caesar Cipher...
g++ -std=c++17 -O2 -Wall -Wextra -o caesar_bin src/caesar.cpp
if %ERRORLEVEL% neq 0 (
    echo Failed to compile Caesar Cipher
    exit /b 1
)
echo Caesar Cipher compiled successfully!

REM Compile Rail Fence Cipher
echo.
echo Compiling Rail Fence Cipher...
g++ -std=c++17 -O2 -Wall -Wextra -o rail_bin src/rail_fence.cpp
if %ERRORLEVEL% neq 0 (
    echo Failed to compile Rail Fence Cipher
    exit /b 1
)
echo Rail Fence Cipher compiled successfully!

echo.
echo All programs compiled! Ready to run.
pause
