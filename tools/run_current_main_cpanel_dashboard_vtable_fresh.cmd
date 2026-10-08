@echo off
set "JAVA_HOME=C:\Program Files\Java\jdk-21"
set "USERPROFILE=C:\Users\Elisha Trice\Documents\ChatGPT\MissionFleet\var\ghidra-profile-next-frontier"
set "APPDATA=C:\Users\Elisha Trice\Documents\ChatGPT\MissionFleet\var\ghidra-profile-next-frontier\Roaming"
set "LOCALAPPDATA=C:\Users\Elisha Trice\Documents\ChatGPT\MissionFleet\var\ghidra-profile-next-frontier\Local"
set "GHIDRA_HEADLESS_MAXMEM=1024m"
set "GHIDRA_HEADLESS_JAVA_OPTIONS=-XX:+UseSerialGC -Xms64m"
set "JAVA_TOOL_OPTIONS=-XX:+UseSerialGC -Xms64m -Xmx1024m"
call .analysis-deps\ghidra_12.1.3_PUBLIC\support\analyzeHeadless.bat var\current-main-ghidra CurrentFleetMain -readOnly -process Main.unpacked.dll -noanalysis -scriptPath var\current-main-ghidra-scripts -postScript DecompileSelected.java var\current-main-next\cpanel-dashboard-vtable-fresh-ghidra.c 58810520 58810090 588104B0 588104E0 58814480 588106E0 58810850 58810AC0 58811960 58811AD0 58811E30 58812170 -postScript DumpFunctionRefs.java 58810520 588104B0 588104E0 58814480 58810090 58812170 5899D6D4 5899D6D0 -postScript DumpExactFunctionRanges.java 58810520 -postScript DumpExactFunctionRanges.java 58810090 -postScript DumpExactFunctionRanges.java 588104B0 -postScript DumpExactFunctionRanges.java 588104E0 -postScript DumpExactFunctionRanges.java 58814480 -postScript DumpExactFunctionRanges.java 588106E0 -postScript DumpExactFunctionRanges.java 58810850 -postScript DumpExactFunctionRanges.java 58810AC0 -postScript DumpExactFunctionRanges.java 58811960 -postScript DumpExactFunctionRanges.java 58811AD0 -postScript DumpExactFunctionRanges.java 58811E30 > var\current-main-next\cpanel-dashboard-vtable-fresh-ghidra.log 2>&1
exit /b %ERRORLEVEL%
