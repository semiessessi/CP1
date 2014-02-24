g++ cp1/Source/ErrorGenProgram/main.cpp
a.exe
del bnfcout\sed*
del bnfcout\absyn.*
del bnfcout\*.bak
del bnfcout\*.l
del bnfcout\*.tmp
del bnfcout\*.y
del cp1\cp1\*.l
del cp1\cp1\*.tmp
del cp1\cp1\*.y
msbuild cp1/cp1/cp1.sln /p:Configuration="Release" /p:Platform="Win32"
copy cp1\cp1\Release\cp1.exe test\cp1.exe