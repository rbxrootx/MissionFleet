// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 44 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b9cf0.

// Ghidra body range 0x587B9CF0..0x587B9D1C; 44 mapped bytes.
extern "C" __declspec(naked) void FUN_587b9cf0_segment_00() {
    __asm {
        // 0x587B9CF0: movzx eax, word ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B9CF5: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B9CF9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9CFB: push eax
        __asm _emit 0x50
        // 0x587B9CFC: movzx eax, word ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B9D01: push edx
        __asm _emit 0x52
        // 0x587B9D02: movzx edx, word ptr [esp + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B9D07: shl eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x10
        // 0x587B9D0A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9D0C: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x587B9D0E: push eax
        __asm _emit 0x50
        // 0x587B9D0F: push 0x80013106
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9D14: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x6F
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9D19: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
