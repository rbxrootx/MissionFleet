@echo off
set "JAVA_HOME=C:\Program Files\Java\jdk-21"
set "USERPROFILE=C:\Users\Elisha Trice\Documents\ChatGPT\MissionFleet\var\ghidra-profile-next-frontier"
set "APPDATA=C:\Users\Elisha Trice\Documents\ChatGPT\MissionFleet\var\ghidra-profile-next-frontier\Roaming"
set "LOCALAPPDATA=C:\Users\Elisha Trice\Documents\ChatGPT\MissionFleet\var\ghidra-profile-next-frontier\Local"
set "GHIDRA_HEADLESS_MAXMEM=1024m"
set "GHIDRA_HEADLESS_JAVA_OPTIONS=-XX:+UseSerialGC -Xms64m"
set "JAVA_TOOL_OPTIONS=-XX:+UseSerialGC -Xms64m -Xmx1024m"
call .analysis-deps\ghidra_12.1.3_PUBLIC\support\analyzeHeadless.bat var\current-main-ghidra CurrentFleetMain -readOnly -process Main.unpacked.dll -noanalysis -scriptPath var\current-main-ghidra-scripts -postScript DecompileSelected.java var\current-main-next\opconvoy-aircraft-update-fresh-ghidra.c 5876C360 587CB280 587CB390 587CB3B0 587CB580 587CB5E0 587CB9B0 587CBE00 587EABC0 587CA9E0 587CADF0 587CB380 587CB6B0 587CA820 587CAF30 -postScript DumpFunctionRefs.java 5876C360 587EABC0 587CBE00 587CA9E0 587CADF0 587CB380 587CB6B0 587CA820 587CAF30 5899B208 5899B230 5899B258 5899B214 5899B23C 5899B264 -postScript DumpExactFunctionRanges.java 5876C360 -postScript DumpExactFunctionRanges.java 587CB280 -postScript DumpExactFunctionRanges.java 587CB390 -postScript DumpExactFunctionRanges.java 587CB3B0 -postScript DumpExactFunctionRanges.java 587CB580 -postScript DumpExactFunctionRanges.java 587CB5E0 -postScript DumpExactFunctionRanges.java 587CB9B0 -postScript DumpExactFunctionRanges.java 587CBE00 -postScript DumpExactFunctionRanges.java 587EABC0 -postScript DumpExactFunctionRanges.java 587CA9E0 -postScript DumpExactFunctionRanges.java 587CADF0 -postScript DumpExactFunctionRanges.java 587CB380 -postScript DumpExactFunctionRanges.java 587CB6B0 -postScript DumpExactFunctionRanges.java 587CA820 -postScript DumpExactFunctionRanges.java 587CAF30 > var\current-main-next\opconvoy-aircraft-update-fresh-ghidra.log 2>&1
exit /b %ERRORLEVEL%
