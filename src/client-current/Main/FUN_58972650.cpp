// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 55 bytes in 1 exact ranges.
// Source symbol alias: FUN_58972650.

// Ghidra body range 0x58972650..0x58972687; 55 mapped bytes.
extern "C" __declspec(naked) void FUN_58972650_segment_00() {
    __asm {
        // 0x58972650: mov al, byte ptr [ecx + 0x1aa]
        __asm _emit 0x8A
        __asm _emit 0x81
        __asm _emit 0xAA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972656: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58972658: je 0x58972661
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5897265A: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5897265E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58972661: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58972665: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58972667: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58972669: mov dl, byte ptr [esp + 7]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x07
        // 0x5897266D: and eax, 0xff00
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972672: shl ecx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x10
        // 0x58972675: or eax, ecx
        __asm _emit 0x0B
        __asm _emit 0xC1
        // 0x58972677: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58972679: mov ch, byte ptr [esp + 6]
        __asm _emit 0x8A
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x06
        // 0x5897267D: shl eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x08
        // 0x58972680: or eax, ecx
        __asm _emit 0x0B
        __asm _emit 0xC1
        // 0x58972682: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58972684: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
