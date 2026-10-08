// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 73 bytes in 1 exact ranges.
// Source symbol alias: FUN_58771370.

// Ghidra body range 0x58771370..0x587713B9; 73 mapped bytes.
extern "C" __declspec(naked) void FUN_58771370_segment_00() {
    __asm {
        // 0x58771370: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        // 0x58771375: jne 0x587713b4
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x58771377: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5877137B: cmp eax, dword ptr [ecx + 0x84]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771381: jne 0x5877139a
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58771383: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58771385: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58771388: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5877138A: mov ecx, dword ptr [0x58a248cc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xCC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771390: call 0x587708e0
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58771395: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58771397: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5877139A: cmp eax, dword ptr [ecx + 0x88]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587713A0: jne 0x587713b4
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587713A2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587713A4: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587713A7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587713A9: mov ecx, dword ptr [0x58a248cc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xCC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587713AF: call 0x5876ee10
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587713B4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587713B6: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
