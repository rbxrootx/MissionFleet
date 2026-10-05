// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58778D60 .. +0x57 bytes.
// Source symbol alias: FUN_58778d60.
extern "C" __declspec(naked) void FUN_58778d60() {
    __asm {
        // 0x58778D60: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58778D64: push ebp
        __asm _emit 0x55
        // 0x58778D65: push esi
        __asm _emit 0x56
        // 0x58778D66: push edi
        __asm _emit 0x57
        // 0x58778D67: cmp dl, 6
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58778D6A: jne 0x58778da1
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x58778D6C: mov esi, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778D72: mov edi, dword ptr [ecx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778D78: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778D7A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58778D7C: jle 0x58778da1
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x58778D7E: mov bp, word ptr [esp + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58778D83: lea ecx, [edi + 2]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x02
        // 0x58778D86: cmp byte ptr [ecx - 2], 6
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0xFE
        __asm _emit 0x06
        // 0x58778D8A: jne 0x58778d96
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58778D8C: cmp dh, byte ptr [ecx - 1]
        __asm _emit 0x3A
        __asm _emit 0x71
        __asm _emit 0xFF
        // 0x58778D8F: jne 0x58778d96
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58778D91: cmp bp, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x29
        // 0x58778D94: je 0x58778da9
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58778D96: inc eax
        __asm _emit 0x40
        // 0x58778D97: add ecx, 0xa8
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778D9D: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58778D9F: jl 0x58778d86
        __asm _emit 0x7C
        __asm _emit 0xE5
        // 0x58778DA1: pop edi
        __asm _emit 0x5F
        // 0x58778DA2: pop esi
        __asm _emit 0x5E
        // 0x58778DA3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778DA5: pop ebp
        __asm _emit 0x5D
        // 0x58778DA6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58778DA9: imul eax, eax, 0xa8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778DAF: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58778DB1: pop edi
        __asm _emit 0x5F
        // 0x58778DB2: pop esi
        __asm _emit 0x5E
        // 0x58778DB3: pop ebp
        __asm _emit 0x5D
        // 0x58778DB4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
