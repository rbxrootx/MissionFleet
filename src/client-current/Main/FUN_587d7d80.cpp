// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 57 bytes in 1 exact ranges.
// Source symbol alias: FUN_587d7d80.

// Ghidra body range 0x587D7D80..0x587D7DB9; 57 mapped bytes.
extern "C" __declspec(naked) void FUN_587d7d80_segment_00() {
    __asm {
        // 0x587D7D80: push esi
        __asm _emit 0x56
        // 0x587D7D81: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7D83: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7D85: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7D87: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587D7D89: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587D7D8B: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x3D
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D7D90: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D7D92: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xCF
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587D7D97: mov eax, dword ptr [0x58a248fc]
        __asm _emit 0xA1
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D7D9C: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7DA2: push eax
        __asm _emit 0x50
        // 0x587D7DA3: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7DA8: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7DAE: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587D7DB0: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587D7DB3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7DB5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587D7DB7: pop esi
        __asm _emit 0x5E
        // 0x587D7DB8: ret
        __asm _emit 0xC3
    }
}
