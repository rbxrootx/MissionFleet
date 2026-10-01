param(
    [Parameter(Mandatory = $true)]
    [string]$ModulePath,
    [int]$HoldSeconds = 120
)

$ErrorActionPreference = 'Stop'

Add-Type -TypeDefinition @'
using System;
using System.Runtime.InteropServices;

public static class AnalysisModuleHost {
    [DllImport("kernel32.dll", CharSet = CharSet.Unicode, SetLastError = true)]
    public static extern bool SetDllDirectory(string path);

    [DllImport("kernel32.dll", CharSet = CharSet.Unicode, SetLastError = true)]
    public static extern IntPtr LoadLibraryW(string path);
}
'@

$resolvedPath = [System.IO.Path]::GetFullPath($ModulePath)
$moduleDirectory = [System.IO.Path]::GetDirectoryName($resolvedPath)
if (-not [AnalysisModuleHost]::SetDllDirectory($moduleDirectory)) {
    throw "SetDllDirectory failed with Win32 error $([Runtime.InteropServices.Marshal]::GetLastWin32Error())"
}

$moduleBase = [AnalysisModuleHost]::LoadLibraryW($resolvedPath)
if ($moduleBase -eq [IntPtr]::Zero) {
    $errorCode = [Runtime.InteropServices.Marshal]::GetLastWin32Error()
    throw "LoadLibraryW failed with Win32 error $errorCode"
}

Write-Output ("MODULE_LOADED pid={0} base=0x{1:X8}" -f $PID, $moduleBase.ToInt64())
Start-Sleep -Seconds $HoldSeconds
