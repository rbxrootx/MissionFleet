// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58778B20 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_58778b20() {
    __asm {
        // 0x58778B20: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58778B24: push ebp
        __asm _emit 0x55
        // 0x58778B25: push esi
        __asm _emit 0x56
        // 0x58778B26: push edi
        __asm _emit 0x57
        // 0x58778B27: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x58778B2A: jne 0x58778b5b
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x58778B2C: mov esi, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x1C
        // 0x58778B2F: mov edi, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x28
        // 0x58778B32: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778B34: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58778B36: jle 0x58778b5b
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x58778B38: mov bp, word ptr [esp + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58778B3D: lea ecx, [edi + 2]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x02
        // 0x58778B40: cmp byte ptr [ecx - 2], 1
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x58778B44: jne 0x58778b50
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58778B46: cmp dh, byte ptr [ecx - 1]
        __asm _emit 0x3A
        __asm _emit 0x71
        __asm _emit 0xFF
        // 0x58778B49: jne 0x58778b50
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58778B4B: cmp bp, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x29
        // 0x58778B4E: je 0x58778b63
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58778B50: inc eax
        __asm _emit 0x40
        // 0x58778B51: add ecx, 0x390
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778B57: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58778B59: jl 0x58778b40
        __asm _emit 0x7C
        __asm _emit 0xE5
        // 0x58778B5B: pop edi
        __asm _emit 0x5F
        // 0x58778B5C: pop esi
        __asm _emit 0x5E
        // 0x58778B5D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778B5F: pop ebp
        __asm _emit 0x5D
        // 0x58778B60: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58778B63: imul eax, eax, 0x390
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778B69: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58778B6B: pop edi
        __asm _emit 0x5F
        // 0x58778B6C: pop esi
        __asm _emit 0x5E
        // 0x58778B6D: pop ebp
        __asm _emit 0x5D
        // 0x58778B6E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
