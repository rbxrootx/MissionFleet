// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 43 bytes in 1 exact ranges.
// Source symbol alias: FUN_587728a0.

// Ghidra body range 0x587728A0..0x587728CB; 43 mapped bytes.
extern "C" __declspec(naked) void FUN_587728a0_segment_00() {
    __asm {
        // 0x587728A0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587728A4: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587728A8: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587728AA: je 0x587728ca
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587728AC: push ebx
        __asm _emit 0x53
        // 0x587728AD: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587728B1: push esi
        __asm _emit 0x56
        // 0x587728B2: push edi
        __asm _emit 0x57
        // 0x587728B3: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587728B5: add eax, 0x108
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587728BA: mov ecx, 0x42
        __asm _emit 0xB9
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587728BF: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x587728C1: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587728C3: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587728C5: jne 0x587728b3
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x587728C7: pop edi
        __asm _emit 0x5F
        // 0x587728C8: pop esi
        __asm _emit 0x5E
        // 0x587728C9: pop ebx
        __asm _emit 0x5B
        // 0x587728CA: ret
        __asm _emit 0xC3
    }
}
