param(
    [Parameter(Mandatory = $true)][int]$ProcessId,
    [Parameter(Mandatory = $true)][UInt32]$MainBase
)

$ErrorActionPreference = 'Stop'
Add-Type -TypeDefinition @'
using System;
using System.Runtime.InteropServices;
using System.Text;
public static class LiveModuleReader {
    [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
    public struct MODULEENTRY32W {
        public UInt32 dwSize, th32ModuleID, th32ProcessID, GlblcntUsage, ProccntUsage;
        public IntPtr modBaseAddr;
        public UInt32 modBaseSize;
        public IntPtr hModule;
        [MarshalAs(UnmanagedType.ByValTStr, SizeConst=256)] public string szModule;
        [MarshalAs(UnmanagedType.ByValTStr, SizeConst=260)] public string szExePath;
    }
    [DllImport("kernel32.dll", SetLastError=true)] public static extern IntPtr OpenProcess(UInt32 access, bool inherit, UInt32 pid);
    [DllImport("kernel32.dll", SetLastError=true)] public static extern bool ReadProcessMemory(IntPtr process, IntPtr address, byte[] buffer, UIntPtr size, out UIntPtr read);
    [DllImport("kernel32.dll", SetLastError=true)] public static extern IntPtr CreateToolhelp32Snapshot(UInt32 flags, UInt32 pid);
    [DllImport("kernel32.dll", CharSet=CharSet.Unicode, SetLastError=true)] public static extern bool Module32FirstW(IntPtr snapshot, ref MODULEENTRY32W entry);
    [DllImport("kernel32.dll", CharSet=CharSet.Unicode, SetLastError=true)] public static extern bool Module32NextW(IntPtr snapshot, ref MODULEENTRY32W entry);
    [DllImport("kernel32.dll")] public static extern bool CloseHandle(IntPtr handle);
}
'@

$snap = [LiveModuleReader]::CreateToolhelp32Snapshot(0x18, [UInt32]$ProcessId)
if ($snap -eq [IntPtr]::Zero -or $snap.ToInt64() -eq -1) { throw "snapshot failed: $([Runtime.InteropServices.Marshal]::GetLastWin32Error())" }
try {
    $entry = New-Object LiveModuleReader+MODULEENTRY32W
    $entry.dwSize = [Runtime.InteropServices.Marshal]::SizeOf($entry)
    $ok = [LiveModuleReader]::Module32FirstW($snap, [ref]$entry)
    while ($ok) {
        Write-Output ("MODULE {0} base=0x{1:X8} size=0x{2:X} path={3}" -f $entry.szModule, $entry.modBaseAddr.ToInt64(), $entry.modBaseSize, $entry.szExePath)
        $ok = [LiveModuleReader]::Module32NextW($snap, [ref]$entry)
    }
} finally { [void][LiveModuleReader]::CloseHandle($snap) }

$proc = [LiveModuleReader]::OpenProcess(0x0410, $false, [UInt32]$ProcessId)
if ($proc -eq [IntPtr]::Zero) { throw "OpenProcess failed: $([Runtime.InteropServices.Marshal]::GetLastWin32Error())" }
try {
    foreach ($rva in 0x25C1D0..0x25C220 | Where-Object { ($_ -band 3) -eq 0 }) {
        $address = [UInt64]$MainBase + [UInt64]$rva
        $buf = New-Object byte[] 4
        $read = [UIntPtr]::Zero
        $ok = [LiveModuleReader]::ReadProcessMemory($proc, [IntPtr]([Int64]$address), $buf, [UIntPtr]::new([UInt64]4), [ref]$read)
        if ($ok -and $read.ToUInt64() -eq 4) {
            Write-Output ("DATA rva=0x{0:X8} value=0x{1:X8}" -f $rva, [BitConverter]::ToUInt32($buf, 0))
        }
    }
    foreach ($rva in @(0x25C1F0, 0x25C200)) {
        $address = [UInt64]$MainBase + [UInt64]$rva
        $buf = New-Object byte[] 4
        $read = [UIntPtr]::Zero
        $ok = [LiveModuleReader]::ReadProcessMemory($proc, [IntPtr]([Int64]$address), $buf, [UIntPtr]::new([UInt64]4), [ref]$read)
        if (-not $ok -or $read.ToUInt64() -ne 4) { throw "pointer read failed at 0x$('{0:X8}' -f $address)" }
        $target = [BitConverter]::ToUInt32($buf, 0)
        Write-Output ("SLOT rva=0x{0:X8} target=0x{1:X8}" -f $rva, $target)
        $code = New-Object byte[] 96
        $read = [UIntPtr]::Zero
        $ok = [LiveModuleReader]::ReadProcessMemory($proc, [IntPtr]([Int64]$target), $code, [UIntPtr]::new([UInt64]$code.Length), [ref]$read)
        if ($ok) { Write-Output ("CODE 0x{0:X8} {1}" -f $target, [BitConverter]::ToString($code, 0, [int]$read.ToUInt64())) }
    }
} finally { [void][LiveModuleReader]::CloseHandle($proc) }
