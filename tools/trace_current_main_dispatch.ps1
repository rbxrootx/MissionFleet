param(
    [string]$ModulePath = 'D:\FleetMission\Main.dll',
    [string]$OutputPath = 'var\current-vmp-runtime-dispatch.txt',
    [switch]$TraceInstructionPath,
    [int]$TraceDispatchCount = 2
)

$ErrorActionPreference = 'Stop'
$expectedSha256 = '74398355bad12f5349319967ec92c08f2bb2e82dbb441acaeeffb4e55b4359dd'
$sha = [System.Security.Cryptography.SHA256]::Create()
$stream = [System.IO.File]::OpenRead($ModulePath)
try {
    $actualSha256 = ([System.BitConverter]::ToString($sha.ComputeHash($stream))).Replace('-', '').ToLowerInvariant()
} finally {
    $stream.Dispose()
    $sha.Dispose()
}
if ($actualSha256 -ne $expectedSha256) {
    throw "Main.dll hash mismatch: expected $expectedSha256, got $actualSha256"
}
if ($TraceDispatchCount -lt 2 -or $TraceDispatchCount -gt 16) {
    throw 'TraceDispatchCount must be between 2 and 16.'
}

$traceType = @'
using System;
using System.IO;
using System.Runtime.InteropServices;
using System.Security.Cryptography;
using System.Text;
using System.Threading;

public static class CurrentMainDispatchTrace {
    const uint LoadedReason = 1;
    const uint Breakpoint = 0x80000003;
    const uint SingleStep = 0x80000004;
    const uint PageExecuteReadWrite = 0x40;
    const int ContinueExecution = -1;
    const int ContinueSearch = 0;
    const int EipOffset = 184;
    const int EflagsOffset = 192;
    const int EsiOffset = 160;
    const int EspOffset = 196;
    const int EdiOffset = 156;
    const int EbxOffset = 164;
    const int EdxOffset = 168;
    const int EcxOffset = 172;
    const int EaxOffset = 176;
    const int EbpOffset = 180;
    const uint TrapFlag = 0x100;
    const uint DispatcherRva = 0x00554F0B;
    const int MaxDispatches = 16;
    const int MaxTraceSteps = 5000;

    [StructLayout(LayoutKind.Sequential)]
    struct UnicodeString {
        public ushort Length;
        public ushort MaximumLength;
        public IntPtr Buffer;
    }

    [StructLayout(LayoutKind.Sequential)]
    struct DllNotificationData {
        public uint Flags;
        public IntPtr FullDllName;
        public IntPtr BaseDllName;
        public IntPtr DllBase;
        public uint SizeOfImage;
    }

    [UnmanagedFunctionPointer(CallingConvention.Winapi)]
    delegate void DllNotification(uint reason, IntPtr data, IntPtr context);

    [UnmanagedFunctionPointer(CallingConvention.Winapi)]
    delegate int VectoredHandler(IntPtr exceptionPointers);

    [DllImport("ntdll.dll")]
    static extern int LdrRegisterDllNotification(uint flags, DllNotification callback,
        IntPtr context, out IntPtr cookie);

    [DllImport("ntdll.dll")]
    static extern int LdrUnregisterDllNotification(IntPtr cookie);

    [DllImport("kernel32.dll")]
    static extern IntPtr AddVectoredExceptionHandler(uint first, VectoredHandler handler);

    [DllImport("kernel32.dll")]
    static extern uint RemoveVectoredExceptionHandler(IntPtr handle);

    [DllImport("kernel32.dll")]
    static extern IntPtr GetCurrentProcess();

    [DllImport("kernel32.dll", SetLastError = true)]
    static extern bool VirtualProtect(IntPtr address, UIntPtr size, uint protection,
        out uint oldProtection);

    [DllImport("kernel32.dll", SetLastError = true)]
    static extern bool ReadProcessMemory(IntPtr process, IntPtr address, byte[] buffer,
        UIntPtr size, out UIntPtr read);

    [DllImport("kernel32.dll", SetLastError = true)]
    static extern bool WriteProcessMemory(IntPtr process, IntPtr address, byte[] buffer,
        UIntPtr size, out UIntPtr written);

    [DllImport("kernel32.dll")]
    static extern bool FlushInstructionCache(IntPtr process, IntPtr address, UIntPtr size);

    [DllImport("kernel32.dll", CharSet = CharSet.Unicode, SetLastError = true)]
    static extern IntPtr LoadLibraryW(string path);

    [DllImport("kernel32.dll", CharSet = CharSet.Unicode, SetLastError = true)]
    static extern bool SetDllDirectoryW(string path);

    static DllNotification dllCallback;
    static VectoredHandler exceptionCallback;
    static IntPtr dllCookie;
    static IntPtr vehHandle;
    static IntPtr moduleBase;
    static IntPtr dispatchAddress;
    static byte originalOpcode;
    static int armed;
    static int stepping;
    static int breakpointArmed;
    static int dispatchCount;
    static int stepIndex;
    static int awaitDispatchStep;
    static int traceInstructionPath;
    static int traceDispatchLimit = 2;
    static int traceStepCount;
    static uint lastEip;
    static uint[] traceIps = new uint[MaxTraceSteps];
    static byte[][] traceOpcodeBytes = new byte[MaxTraceSteps][];
    static uint[] beforeEsi = new uint[MaxDispatches];
    static uint[] beforeEax = new uint[MaxDispatches];
    static uint[] beforeEbx = new uint[MaxDispatches];
    static uint[] beforeEcx = new uint[MaxDispatches];
    static uint[] beforeEdx = new uint[MaxDispatches];
    static uint[] beforeEdi = new uint[MaxDispatches];
    static uint[] beforeEbp = new uint[MaxDispatches];
    static uint[] beforeEflags = new uint[MaxDispatches];
    static uint[] beforeEsp = new uint[MaxDispatches];
    static byte[][] streamBytes = new byte[MaxDispatches][];
    static uint[] afterEip = new uint[MaxDispatches];
    static uint[] afterEsi = new uint[MaxDispatches];
    static uint[] afterEax = new uint[MaxDispatches];
    static uint[] afterEbx = new uint[MaxDispatches];
    static uint[] afterEcx = new uint[MaxDispatches];
    static uint[] afterEdx = new uint[MaxDispatches];
    static uint[] afterEdi = new uint[MaxDispatches];
    static uint[] afterEbp = new uint[MaxDispatches];
    static uint[] afterEflags = new uint[MaxDispatches];
    static uint[] afterEsp = new uint[MaxDispatches];
    static byte[][] targetBytes = new byte[MaxDispatches][];
    static string failure;

    static bool Read(IntPtr address, byte[] data) {
        UIntPtr read;
        return ReadProcessMemory(GetCurrentProcess(), address, data,
            new UIntPtr((uint)data.Length), out read) && read.ToUInt32() == data.Length;
    }

    static bool WriteByte(IntPtr address, byte value) {
        uint oldProtection;
        if (!VirtualProtect(address, new UIntPtr(1), PageExecuteReadWrite, out oldProtection))
            return false;
        UIntPtr written;
        bool ok = WriteProcessMemory(GetCurrentProcess(), address, new byte[] { value },
            new UIntPtr(1), out written) && written.ToUInt32() == 1;
        FlushInstructionCache(GetCurrentProcess(), address, new UIntPtr(1));
        uint ignored;
        VirtualProtect(address, new UIntPtr(1), oldProtection, out ignored);
        return ok;
    }

    static void OnDllNotification(uint reason, IntPtr data, IntPtr context) {
        try {
            if (reason != LoadedReason || Interlocked.CompareExchange(ref armed, 1, 0) != 0)
                return;
            DllNotificationData info = (DllNotificationData)Marshal.PtrToStructure(
                data, typeof(DllNotificationData));
            UnicodeString name = (UnicodeString)Marshal.PtrToStructure(
                info.BaseDllName, typeof(UnicodeString));
            string baseName = Marshal.PtrToStringUni(name.Buffer, name.Length / 2);
            if (!String.Equals(baseName, "Main.dll", StringComparison.OrdinalIgnoreCase)) {
                Interlocked.Exchange(ref armed, 0);
                return;
            }
            moduleBase = info.DllBase;
            dispatchAddress = new IntPtr(moduleBase.ToInt32() + (int)DispatcherRva);
            byte[] code = new byte[2];
            if (!Read(dispatchAddress, code) || code[0] != 0xFF || code[1] != 0xE6) {
                failure = "Expected JMP ESI bytes FF E6 were not present at the pinned RVA.";
                Interlocked.Exchange(ref armed, 3);
                return;
            }
            originalOpcode = code[0];
            if (!WriteByte(dispatchAddress, 0xCC)) {
                failure = "Could not install the one-byte software breakpoint.";
                Interlocked.Exchange(ref armed, 3);
                return;
            }
            breakpointArmed = 1;
            Interlocked.Exchange(ref armed, 2);
        } catch (Exception e) {
            failure = e.GetType().Name + ": " + e.Message;
            Interlocked.Exchange(ref armed, 3);
        }
    }

    static int OnException(IntPtr exceptionPointers) {
        try {
            IntPtr record = Marshal.ReadIntPtr(exceptionPointers);
            IntPtr context = Marshal.ReadIntPtr(exceptionPointers, 4);
            uint code = unchecked((uint)Marshal.ReadInt32(record));
            IntPtr address = Marshal.ReadIntPtr(record, 12);
            if (code == Breakpoint && armed == 2 && address == dispatchAddress &&
                    dispatchCount < MaxDispatches) {
                stepIndex = dispatchCount;
                beforeEax[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EaxOffset));
                beforeEbx[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EbxOffset));
                beforeEcx[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EcxOffset));
                beforeEdx[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EdxOffset));
                beforeEdi[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EdiOffset));
                beforeEbp[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EbpOffset));
                beforeEsi[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EsiOffset));
                beforeEflags[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EflagsOffset));
                beforeEsp[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EspOffset));
                streamBytes[stepIndex] = new byte[16];
                if (!Read(new IntPtr(unchecked((int)beforeEbp[stepIndex])), streamBytes[stepIndex]))
                    streamBytes[stepIndex] = new byte[0];
                if (!WriteByte(dispatchAddress, originalOpcode)) {
                    failure = "Could not restore the original JMP ESI opcode.";
                    Interlocked.Exchange(ref armed, 3);
                    return ContinueSearch;
                }
                breakpointArmed = 0;
                Marshal.WriteInt32(context, EipOffset, dispatchAddress.ToInt32());
                Marshal.WriteInt32(context, EflagsOffset,
                    unchecked((int)(beforeEflags[stepIndex] | TrapFlag)));
                lastEip = unchecked((uint)dispatchAddress.ToInt32());
                awaitDispatchStep = 1;
                Interlocked.Exchange(ref stepping, 1);
                return ContinueExecution;
            }
            if (code == SingleStep && stepping == 1) {
                uint nextEip = unchecked((uint)Marshal.ReadInt32(context, EipOffset));
                bool completedDispatch = awaitDispatchStep != 0;
                if (traceInstructionPath != 0 && traceStepCount < MaxTraceSteps) {
                    traceIps[traceStepCount] = lastEip;
                    traceOpcodeBytes[traceStepCount] = new byte[15];
                    if (!Read(new IntPtr(unchecked((int)lastEip)), traceOpcodeBytes[traceStepCount]))
                        traceOpcodeBytes[traceStepCount] = new byte[0];
                    traceStepCount++;
                }
                lastEip = nextEip;
                if (awaitDispatchStep != 0) {
                    awaitDispatchStep = 0;
                    afterEip[stepIndex] = nextEip;
                    afterEax[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EaxOffset));
                    afterEbx[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EbxOffset));
                    afterEcx[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EcxOffset));
                    afterEdx[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EdxOffset));
                    afterEdi[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EdiOffset));
                    afterEbp[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EbpOffset));
                    afterEsi[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EsiOffset));
                    afterEflags[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EflagsOffset));
                    afterEsp[stepIndex] = unchecked((uint)Marshal.ReadInt32(context, EspOffset));
                    targetBytes[stepIndex] = new byte[32];
                    if (!Read(new IntPtr(unchecked((int)afterEip[stepIndex])), targetBytes[stepIndex]))
                        targetBytes[stepIndex] = new byte[0];
                    dispatchCount++;
                }
                bool keepStepping = traceInstructionPath != 0 &&
                    dispatchCount < traceDispatchLimit && traceStepCount < MaxTraceSteps;
                {
                    uint currentFlags = unchecked((uint)Marshal.ReadInt32(context, EflagsOffset));
                    uint updatedFlags = keepStepping
                        ? (currentFlags | TrapFlag)
                        : (currentFlags & ~TrapFlag);
                    Marshal.WriteInt32(context, EflagsOffset, unchecked((int)updatedFlags));
                }
                if (!keepStepping) {
                    Interlocked.Exchange(ref stepping, 0);
                }
                if (completedDispatch && dispatchCount < MaxDispatches &&
                        (traceInstructionPath == 0 || dispatchCount < traceDispatchLimit) &&
                        WriteByte(dispatchAddress, 0xCC))
                    breakpointArmed = 1;
                return ContinueExecution;
            }
        } catch (Exception e) {
            failure = e.GetType().Name + ": " + e.Message;
        }
        return ContinueSearch;
    }

    public static string Run(string path, bool traceInstructions, int dispatchLimit) {
        if (IntPtr.Size != 4)
            throw new InvalidOperationException("Run this trace from 32-bit Windows PowerShell.");
        if (!SetDllDirectoryW(Path.GetDirectoryName(path)))
            throw new InvalidOperationException("SetDllDirectoryW failed: " + Marshal.GetLastWin32Error());
        traceInstructionPath = traceInstructions ? 1 : 0;
        traceDispatchLimit = dispatchLimit;
        dllCallback = new DllNotification(OnDllNotification);
        exceptionCallback = new VectoredHandler(OnException);
        vehHandle = AddVectoredExceptionHandler(1, exceptionCallback);
        if (vehHandle == IntPtr.Zero)
            throw new InvalidOperationException("AddVectoredExceptionHandler failed.");
        int status = LdrRegisterDllNotification(0, dllCallback, IntPtr.Zero, out dllCookie);
        if (status != 0)
            throw new InvalidOperationException("LdrRegisterDllNotification failed: 0x" + status.ToString("X8"));
        IntPtr loaded = LoadLibraryW(path);
        if (loaded == IntPtr.Zero)
            throw new InvalidOperationException("LoadLibraryW failed: " + Marshal.GetLastWin32Error());
        if (breakpointArmed != 0 && !WriteByte(dispatchAddress, originalOpcode))
            failure = "Could not restore the dispatcher byte before removing the exception handler.";
        breakpointArmed = 0;
        LdrUnregisterDllNotification(dllCookie);
        RemoveVectoredExceptionHandler(vehHandle);
        GC.KeepAlive(dllCallback);
        GC.KeepAlive(exceptionCallback);
        if (failure != null)
            throw new InvalidOperationException(failure);
        if (dispatchCount == 0)
            throw new InvalidOperationException("The isolated DLL initialization did not reach the JMP ESI dispatch.");
        StringBuilder output = new StringBuilder();
        output.AppendLine("module_path=" + path);
        output.AppendLine("module_base=0x" + moduleBase.ToInt32().ToString("X8"));
        output.AppendLine("dispatcher=0x" + dispatchAddress.ToInt32().ToString("X8"));
        output.AppendLine("breakpoint_bytes=FF E6 (original instruction restored before execution)");
        output.AppendLine("dispatch_count=" + dispatchCount);
        output.AppendLine("instruction_path_traced=" + (traceInstructionPath != 0));
        output.AppendLine("trace_dispatch_limit=" + traceDispatchLimit);
        output.AppendLine("instruction_path_count=" + traceStepCount);
        for (int i = 0; i < dispatchCount; i++) {
            output.AppendLine("dispatch[" + i + "].before_esi=0x" + beforeEsi[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].before_eax=0x" + beforeEax[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].before_ebx=0x" + beforeEbx[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].before_ecx=0x" + beforeEcx[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].before_edx=0x" + beforeEdx[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].before_edi=0x" + beforeEdi[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].before_ebp=0x" + beforeEbp[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].before_eflags=0x" + beforeEflags[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].before_esp=0x" + beforeEsp[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].stream_bytes=" +
                BitConverter.ToString(streamBytes[i] ?? new byte[0]).Replace('-', ' '));
            output.AppendLine("dispatch[" + i + "].after_eip=0x" + afterEip[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].after_esi=0x" + afterEsi[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].after_eax=0x" + afterEax[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].after_ebx=0x" + afterEbx[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].after_ecx=0x" + afterEcx[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].after_edx=0x" + afterEdx[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].after_edi=0x" + afterEdi[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].after_ebp=0x" + afterEbp[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].after_eflags=0x" + afterEflags[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].after_esp=0x" + afterEsp[i].ToString("X8"));
            output.AppendLine("dispatch[" + i + "].target_bytes=" +
                BitConverter.ToString(targetBytes[i] ?? new byte[0]).Replace('-', ' '));
        }
        for (int i = 0; i < traceStepCount; i++) {
            output.AppendLine("step_ip[" + i + "]=0x" + traceIps[i].ToString("X8"));
            output.AppendLine("step_bytes[" + i + "]=" +
                BitConverter.ToString(traceOpcodeBytes[i] ?? new byte[0]).Replace('-', ' '));
        }
        return output.ToString();
    }
}
'@

Add-Type -TypeDefinition $traceType -Language CSharp
$trace = [CurrentMainDispatchTrace]::Run(
    [System.IO.Path]::GetFullPath($ModulePath), $TraceInstructionPath.IsPresent,
    $TraceDispatchCount)
$outputFullPath = [System.IO.Path]::GetFullPath($OutputPath)
$outputDirectory = [System.IO.Path]::GetDirectoryName($outputFullPath)
if (-not [System.IO.Directory]::Exists($outputDirectory)) {
    [System.IO.Directory]::CreateDirectory($outputDirectory) | Out-Null
}
$content = "main_sha256=$actualSha256`r`n" + $trace
[System.IO.File]::WriteAllText($outputFullPath, $content, [System.Text.Encoding]::ASCII)
Write-Output $content
Write-Output "saved=$outputFullPath"
