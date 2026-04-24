@echo off
REM Interactive Test Suite for Lab 2
REM This file demonstrates all test cases

echo ========================================
echo FIT4012 Lab 2 - Classical Ciphers Tests
echo ========================================
echo.

REM Caesar Cipher Tests
echo TEST 1: Caesar Encrypt - "I LOVE YOU" with key 3
echo Expected: L ORYH BRX
echo Run: echo I LOVE YOU ^| caesar_bin
echo Choice: 1, Message: I LOVE YOU, Key: 3
echo.

echo TEST 2: Caesar Encrypt - "hello world" with key 5
echo Expected: mjqqt btwqi
echo Run: echo hello world ^| caesar_bin
echo Choice: 1, Message: hello world, Key: 5
echo.

echo TEST 3: Caesar Decrypt - "LORYH BRX" with key 3
echo Expected: I LOVE YOU
echo Run: echo LORYH BRX ^| caesar_bin
echo Choice: 2, Message: LORYH BRX, Key: 3
echo.

echo ========================================
echo.

REM Rail Fence Tests
echo TEST 4: Rail Fence Encrypt - "I LOVE YOU" with 2 rails
echo Expected: ILV OOEYU
echo Run: echo I LOVE YOU ^| rail_bin
echo Choice: 1, Message: I LOVE YOU, Rails: 2
echo.

echo TEST 5: Rail Fence Encrypt - "I LOVE YOU" with 4 rails
echo Expected: I LVOU EY
echo Run: echo I LOVE YOU ^| rail_bin
echo Choice: 1, Message: I LOVE YOU, Rails: 4
echo.

echo TEST 6: Rail Fence Decrypt - "ILV OOEYU" with 2 rails
echo Expected: I LOVE YOU
echo Run: echo ILV OOEYU ^| rail_bin
echo Choice: 2, Message: ILV OOEYU, Rails: 2
echo.

echo TEST 7: Rail Fence Decrypt - "I LVOU EY" with 4 rails
echo Expected: I LOVE YOU
echo Run: echo I LVOU EY ^| rail_bin
echo Choice: 2, Message: I LVOU EY, Rails: 4
echo.

echo TEST 8: Rail Fence File Input - Read from data/input.txt
echo Expected: ILV OOEYU (when encrypted with 2 rails)
echo Run: rail_bin
echo Choice: 3, Rails: 2
echo.

echo ========================================
echo All manual test cases documented above.
echo Please run the .bat file after installing g++
echo ========================================
pause
