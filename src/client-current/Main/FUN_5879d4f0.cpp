// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 46 bytes in 1 exact ranges.
// Source symbol alias: FUN_5879d4f0.

// Ghidra body range 0x5879D4F0..0x5879D51E; 46 mapped bytes.
extern "C" __declspec(naked) void FUN_5879d4f0_segment_00() {
    __asm {
        // 0x5879D4F0: push ebx
        __asm _emit 0x53
        // 0x5879D4F1: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5879D4F3: cmp dword ptr [ebx + 0x300], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D4FA: je 0x5879d51a
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5879D4FC: push esi
        __asm _emit 0x56
        // 0x5879D4FD: push edi
        __asm _emit 0x57
        // 0x5879D4FE: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5879D502: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5879D504: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5879D506: jbe 0x5879d518
        __asm _emit 0x76
        __asm _emit 0x10
        // 0x5879D508: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5879D50A: call 0x5879d480
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879D50F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879D511: je 0x5879d518
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5879D513: inc esi
        __asm _emit 0x46
        // 0x5879D514: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x5879D516: jb 0x5879d508
        __asm _emit 0x72
        __asm _emit 0xF0
        // 0x5879D518: pop edi
        __asm _emit 0x5F
        // 0x5879D519: pop esi
        __asm _emit 0x5E
        // 0x5879D51A: pop ebx
        __asm _emit 0x5B
        // 0x5879D51B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
