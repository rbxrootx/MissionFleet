// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 45 bytes in 1 exact ranges.
// Source symbol alias: FUN_58896200.

// Ghidra body range 0x58896200..0x5889622D; 45 mapped bytes.
extern "C" __declspec(naked) void FUN_58896200_segment_00() {
    __asm {
        // 0x58896200: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58896204: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896209: mov dword ptr [ecx + 0x568], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896213: mov dword ptr [ecx + 0x4e0], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xE0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896219: add ecx, 0x4e8
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889621F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58896221: push ecx
        __asm _emit 0x51
        // 0x58896222: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x6A
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58896227: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5889622A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
