// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 42 bytes in 2 exact ranges.
// Source symbol alias: FUN_587439d0.

// Ghidra body range 0x587439D0..0x587439F4; 36 mapped bytes.
extern "C" __declspec(naked) void FUN_587439d0_segment_00() {
    __asm {
        // 0x587439D0: push ebx
        __asm _emit 0x53
        // 0x587439D1: push esi
        __asm _emit 0x56
        // 0x587439D2: push edi
        __asm _emit 0x57
        // 0x587439D3: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587439D7: cmp byte ptr [edi + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x587439DB: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587439DD: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x587439DF: jne 0x587439ff
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587439E1: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587439E4: push eax
        __asm _emit 0x50
        // 0x587439E5: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587439E7: call 0x587439d0
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587439EC: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587439EE: push edi
        __asm _emit 0x57
        // 0x587439EF: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x92
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587439FF..0x58743A05; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_587439d0_segment_01() {
    __asm {
        // 0x587439FF: pop edi
        __asm _emit 0x5F
        // 0x58743A00: pop esi
        __asm _emit 0x5E
        // 0x58743A01: pop ebx
        __asm _emit 0x5B
        // 0x58743A02: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
