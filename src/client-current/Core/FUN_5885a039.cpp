// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A039 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_5885a039() {
    __asm {
        // 0x5885A039: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885A03B: push ebp
        __asm _emit 0x55
        // 0x5885A03C: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885A03E: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x5885A041: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A044: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885A047: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885A049: jne 0x5885a054
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x5885A04B: push eax
        __asm _emit 0x50
        // 0x5885A04C: call 0x58859ec2
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A051: pop ecx
        __asm _emit 0x59
        // 0x5885A052: leave
        __asm _emit 0xC9
        // 0x5885A053: ret
        __asm _emit 0xC3
        // 0x5885A054: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5885A057: nop
        __asm _emit 0x90
        // 0x5885A058: push eax
        __asm _emit 0x50
        // 0x5885A059: call 0x58859f3f
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A05E: pop ecx
        __asm _emit 0x59
        // 0x5885A05F: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885A061: jne 0x5885a067
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5885A063: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A065: leave
        __asm _emit 0xC9
        // 0x5885A066: ret
        __asm _emit 0xC3
        // 0x5885A067: lea eax, [ebp - 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885A06A: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885A06D: lea ecx, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xFF
        // 0x5885A070: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885A073: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5885A076: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5885A079: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5885A07C: push eax
        __asm _emit 0x50
        // 0x5885A07D: lea eax, [ebp - 0x10]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885A080: push eax
        __asm _emit 0x50
        // 0x5885A081: lea eax, [ebp - 0x14]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5885A084: push eax
        __asm _emit 0x50
        // 0x5885A085: call 0x58859e62
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A08A: leave
        __asm _emit 0xC9
        // 0x5885A08B: ret
        __asm _emit 0xC3
    }
}
