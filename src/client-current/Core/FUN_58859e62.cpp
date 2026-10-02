// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58859E62 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_58859e62() {
    __asm {
        // 0x58859E62: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x58859E64: push 0x588ed1a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0xD1
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x58859E69: call 0x58832760
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x88
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58859E6E: and dword ptr [ebp - 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xE4
        __asm _emit 0x00
        // 0x58859E72: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58859E75: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x58859E77: call 0x58859d02
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859E7C: pop ecx
        __asm _emit 0x59
        // 0x58859E7D: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x58859E81: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58859E84: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58859E86: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x58859E88: call 0x58859fcb
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859E8D: pop ecx
        __asm _emit 0x59
        // 0x58859E8E: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58859E90: mov dword ptr [ebp - 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58859E93: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859E9A: call 0x58859eb6
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859E9F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58859EA1: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x58859EA4: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859EAB: pop ecx
        __asm _emit 0x59
        // 0x58859EAC: pop edi
        __asm _emit 0x5F
        // 0x58859EAD: pop esi
        __asm _emit 0x5E
        // 0x58859EAE: pop ebx
        __asm _emit 0x5B
        // 0x58859EAF: leave
        __asm _emit 0xC9
        // 0x58859EB0: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
