// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 1 exact ranges.
// Source symbol alias: FUN_5875cb90.

// Ghidra body range 0x5875CB90..0x5875CBAB; 27 mapped bytes.
extern "C" __declspec(naked) void FUN_5875cb90_segment_00() {
    __asm {
        // 0x5875CB90: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5875CB94: cmp eax, dword ptr [ecx + 0x50]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5875CB97: je 0x5875cba3
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5875CB99: cmp eax, dword ptr [ecx + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5875CB9C: je 0x5875cba3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5875CB9E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875CBA0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5875CBA3: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CBA8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
