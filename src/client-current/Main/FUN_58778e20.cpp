// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58778E20 .. +0x57 bytes.
// Source symbol alias: FUN_58778e20.
extern "C" __declspec(naked) void FUN_58778e20() {
    __asm {
        // 0x58778E20: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58778E24: push ebp
        __asm _emit 0x55
        // 0x58778E25: push esi
        __asm _emit 0x56
        // 0x58778E26: push edi
        __asm _emit 0x57
        // 0x58778E27: cmp dl, 0xc
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x0C
        // 0x58778E2A: jne 0x58778e61
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x58778E2C: mov esi, dword ptr [ecx + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778E32: mov edi, dword ptr [ecx + 0x104]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778E38: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778E3A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58778E3C: jle 0x58778e61
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x58778E3E: mov bp, word ptr [esp + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58778E43: lea ecx, [edi + 2]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x02
        // 0x58778E46: cmp byte ptr [ecx - 2], 0xc
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0xFE
        __asm _emit 0x0C
        // 0x58778E4A: jne 0x58778e56
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58778E4C: cmp dh, byte ptr [ecx - 1]
        __asm _emit 0x3A
        __asm _emit 0x71
        __asm _emit 0xFF
        // 0x58778E4F: jne 0x58778e56
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58778E51: cmp bp, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x29
        // 0x58778E54: je 0x58778e69
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58778E56: inc eax
        __asm _emit 0x40
        // 0x58778E57: add ecx, 0xb4
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778E5D: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58778E5F: jl 0x58778e46
        __asm _emit 0x7C
        __asm _emit 0xE5
        // 0x58778E61: pop edi
        __asm _emit 0x5F
        // 0x58778E62: pop esi
        __asm _emit 0x5E
        // 0x58778E63: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778E65: pop ebp
        __asm _emit 0x5D
        // 0x58778E66: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58778E69: imul eax, eax, 0xb4
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778E6F: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58778E71: pop edi
        __asm _emit 0x5F
        // 0x58778E72: pop esi
        __asm _emit 0x5E
        // 0x58778E73: pop ebp
        __asm _emit 0x5D
        // 0x58778E74: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
