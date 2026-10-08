// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 43 bytes in 1 exact ranges.
// Source symbol alias: FUN_587728d0.

// Ghidra body range 0x587728D0..0x587728FB; 43 mapped bytes.
extern "C" __declspec(naked) void FUN_587728d0_segment_00() {
    __asm {
        // 0x587728D0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587728D4: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587728D8: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587728DA: je 0x587728fa
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587728DC: push ebx
        __asm _emit 0x53
        // 0x587728DD: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587728E1: push esi
        __asm _emit 0x56
        // 0x587728E2: push edi
        __asm _emit 0x57
        // 0x587728E3: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587728E5: add eax, 0x118
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587728EA: mov ecx, 0x46
        __asm _emit 0xB9
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587728EF: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x587728F1: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587728F3: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587728F5: jne 0x587728e3
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x587728F7: pop edi
        __asm _emit 0x5F
        // 0x587728F8: pop esi
        __asm _emit 0x5E
        // 0x587728F9: pop ebx
        __asm _emit 0x5B
        // 0x587728FA: ret
        __asm _emit 0xC3
    }
}
