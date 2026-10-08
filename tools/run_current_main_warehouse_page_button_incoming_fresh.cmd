@echo off
set "JAVA_HOME=C:\Program Files\Java\jdk-21"
set "USERPROFILE=C:\Users\Elisha Trice\Documents\ChatGPT\MissionFleet\var\ghidra-profile-next-frontier"
set "APPDATA=C:\Users\Elisha Trice\Documents\ChatGPT\MissionFleet\var\ghidra-profile-next-frontier\Roaming"
set "LOCALAPPDATA=C:\Users\Elisha Trice\Documents\ChatGPT\MissionFleet\var\ghidra-profile-next-frontier\Local"
set "GHIDRA_HEADLESS_MAXMEM=1024m"
set "GHIDRA_HEADLESS_JAVA_OPTIONS=-XX:+UseSerialGC -Xms64m"
set "JAVA_TOOL_OPTIONS=-XX:+UseSerialGC -Xms64m -Xmx1024m"
call .analysis-deps\ghidra_12.1.3_PUBLIC\support\analyzeHeadless.bat var\current-main-ghidra CurrentFleetMain -readOnly -process Main.unpacked.dll -noanalysis -scriptPath var\current-main-ghidra-scripts -postScript DecompileSelected.java var\current-main-next\warehouse-page-button-incoming-fresh-ghidra.c 588FBEF0 588FC0D0 588FF6B0 -postScript DumpExactFunctionRanges.java 588FBEF0 -postScript DumpExactFunctionRanges.java 588FC0D0 -postScript DumpExactFunctionRanges.java 588FF6B0 > var\current-main-next\warehouse-page-button-incoming-fresh-ghidra.log 2>&1
exit /b %ERRORLEVEL%
