@echo off
set "JAVA_HOME=C:\Program Files\Java\jdk-21"
set "USERPROFILE=C:\Users\Elisha Trice\Documents\ChatGPT\MissionFleet\var\ghidra-profile-next-frontier"
set "APPDATA=C:\Users\Elisha Trice\Documents\ChatGPT\MissionFleet\var\ghidra-profile-next-frontier\Roaming"
set "LOCALAPPDATA=C:\Users\Elisha Trice\Documents\ChatGPT\MissionFleet\var\ghidra-profile-next-frontier\Local"
set "GHIDRA_HEADLESS_MAXMEM=1024m"
set "GHIDRA_HEADLESS_JAVA_OPTIONS=-XX:+UseSerialGC -Xms64m"
set "JAVA_TOOL_OPTIONS=-XX:+UseSerialGC -Xms64m -Xmx1024m"
call .analysis-deps\ghidra_12.1.3_PUBLIC\support\analyzeHeadless.bat var\current-main-ghidra CurrentFleetMain -readOnly -process Main.unpacked.dll -noanalysis -scriptPath var\current-main-ghidra-scripts -postScript DecompileSelected.java var\current-main-next\communicator-leave-tab-fresh-ghidra.c 58753E80 587B9320 58833550 58833640 58833680 588336D0 588337A0 58833980 58843380 -postScript DumpFunctionRefs.java 58753E80 587B9320 58833550 58833640 58833680 588336D0 588337A0 58833980 58843380 5899E180 589A8460 589CC668 -postScript DumpExactFunctionRanges.java 58753E80 -postScript DumpExactFunctionRanges.java 587B9320 -postScript DumpExactFunctionRanges.java 58833550 -postScript DumpExactFunctionRanges.java 58833640 -postScript DumpExactFunctionRanges.java 58833680 -postScript DumpExactFunctionRanges.java 588336D0 -postScript DumpExactFunctionRanges.java 588337A0 -postScript DumpExactFunctionRanges.java 58833980 -postScript DumpExactFunctionRanges.java 58843380 > var\current-main-next\communicator-leave-tab-fresh-ghidra.log 2>&1
exit /b %ERRORLEVEL%
