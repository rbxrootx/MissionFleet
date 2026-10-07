// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 39 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f4500.

// Ghidra body range 0x588F4500..0x588F4527; 39 mapped bytes.
extern "C" __declspec(naked) void FUN_588f4500_segment_00() {
    __asm {
        // 0x588F4500: push esi
        __asm _emit 0x56
        // 0x588F4501: push edi
        __asm _emit 0x57
        // 0x588F4502: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588F4504: mov esi, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x588F4507: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588F4509: je 0x588f460e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F450F: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F4513: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588F4516: cmp dword ptr [eax + 0x50], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x588F4519: je 0x588f4527
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588F451B: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x588F451E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588F4520: jne 0x588f4513
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588F4522: pop edi
        __asm _emit 0x5F
        // 0x588F4523: pop esi
        __asm _emit 0x5E
        // 0x588F4524: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
