// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 51 bytes in 1 exact ranges.
// Source symbol alias: FUN_58909f50.

// Ghidra body range 0x58909F50..0x58909F83; 51 mapped bytes.
extern "C" __declspec(naked) void FUN_58909f50_segment_00() {
    __asm {
        // 0x58909F50: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58909F54: push esi
        __asm _emit 0x56
        // 0x58909F55: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58909F57: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58909F59: mov dword ptr [esi], 0x589a2a64
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x64
        __asm _emit 0x2A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58909F5F: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58909F61: je 0x58909f71
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58909F63: push eax
        __asm _emit 0x50
        // 0x58909F64: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58909F66: call 0x589091f0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58909F6B: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58909F6D: pop esi
        __asm _emit 0x5E
        // 0x58909F6E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58909F71: mov dword ptr [esi + 0x90], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909F77: mov dword ptr [esi + 0x94], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909F7D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58909F7F: pop esi
        __asm _emit 0x5E
        // 0x58909F80: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
