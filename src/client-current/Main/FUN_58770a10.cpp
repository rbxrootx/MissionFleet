// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 112 bytes in 1 exact ranges.
// Source symbol alias: FUN_58770a10.

// Ghidra body range 0x58770A10..0x58770A80; 112 mapped bytes.
extern "C" __declspec(naked) void FUN_58770a10_segment_00() {
    __asm {
        // 0x58770A10: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        // 0x58770A15: jne 0x58770a7b
        __asm _emit 0x75
        __asm _emit 0x64
        // 0x58770A17: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58770A1B: cmp eax, dword ptr [ecx + 0x78]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x58770A1E: jne 0x58770a3c
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58770A20: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58770A22: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58770A24: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58770A26: push 0x259
        __asm _emit 0x68
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770A2B: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xB0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58770A30: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58770A32: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x9B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58770A37: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58770A39: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58770A3C: cmp eax, dword ptr [ecx + 0x70]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x70
        // 0x58770A3F: jne 0x58770a50
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x58770A41: mov ecx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x68
        // 0x58770A44: push 0x11
        __asm _emit 0x6A
        __asm _emit 0x11
        // 0x58770A46: call 0x587b6d10
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58770A4B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58770A4D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58770A50: cmp eax, dword ptr [ecx + 0x74]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x74
        // 0x58770A53: jne 0x58770a64
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x58770A55: mov ecx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x68
        // 0x58770A58: push 0x11
        __asm _emit 0x6A
        __asm _emit 0x11
        // 0x58770A5A: call 0x587b6d80
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58770A5F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58770A61: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58770A64: cmp eax, dword ptr [ecx + 0x7c]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x7C
        // 0x58770A67: jne 0x58770a7b
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x58770A69: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58770A6B: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58770A6E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58770A70: mov ecx, dword ptr [0x58a248cc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xCC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58770A76: call 0x58770680
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58770A7B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58770A7D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
