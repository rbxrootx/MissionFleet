// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 19 bytes in 1 exact ranges.
// Source symbol alias: FUN_58858650.

// Ghidra body range 0x58858650..0x58858663; 19 mapped bytes.
extern "C" __declspec(naked) void FUN_58858650_segment_00() {
    __asm {
        // 0x58858650: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58858654: mov eax, dword ptr [ecx + eax*4 + 0x8b8]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885865B: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858660: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
