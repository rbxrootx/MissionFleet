// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A77A .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_5885a77a() {
    __asm {
        // 0x5885A77A: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x5885A77C: push 0x588ed220
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0xD2
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x5885A781: call 0x58832760
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x7F
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885A786: and dword ptr [ebp - 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xE4
        __asm _emit 0x00
        // 0x5885A78A: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A78D: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x5885A78F: call 0x58859d02
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A794: pop ecx
        __asm _emit 0x59
        // 0x5885A795: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x5885A799: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885A79C: call 0x5885a7d5
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A7A1: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5885A7A3: mov dword ptr [ebp - 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5885A7A6: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A7AD: call 0x5885a7c9
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A7B2: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885A7B4: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x5885A7B7: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A7BE: pop ecx
        __asm _emit 0x59
        // 0x5885A7BF: pop edi
        __asm _emit 0x5F
        // 0x5885A7C0: pop esi
        __asm _emit 0x5E
        // 0x5885A7C1: pop ebx
        __asm _emit 0x5B
        // 0x5885A7C2: leave
        __asm _emit 0xC9
        // 0x5885A7C3: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
