// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885781F .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_5885781f() {
    __asm {
        // 0x5885781F: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58857821: push 0x588ed120
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0xD1
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x58857826: call 0x58832760
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xAF
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885782B: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885782E: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x58857830: call 0x58863c1c
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857835: pop ecx
        __asm _emit 0x59
        // 0x58857836: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x5885783A: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885783D: call 0x58857887
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857842: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58857849: call 0x58857860
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885784E: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x58857851: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857858: pop ecx
        __asm _emit 0x59
        // 0x58857859: pop edi
        __asm _emit 0x5F
        // 0x5885785A: pop esi
        __asm _emit 0x5E
        // 0x5885785B: pop ebx
        __asm _emit 0x5B
        // 0x5885785C: leave
        __asm _emit 0xC9
        // 0x5885785D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
