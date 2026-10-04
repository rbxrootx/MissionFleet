// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58778D00 .. +0x51 bytes.
// Source symbol alias: FUN_58778d00.
extern "C" __declspec(naked) void FUN_58778d00() {
    __asm {
        // 0x58778D00: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58778D04: push ebp
        __asm _emit 0x55
        // 0x58778D05: push esi
        __asm _emit 0x56
        // 0x58778D06: push edi
        __asm _emit 0x57
        // 0x58778D07: cmp dl, 5
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58778D0A: jne 0x58778d3b
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x58778D0C: mov esi, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x6C
        // 0x58778D0F: mov edi, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x78
        // 0x58778D12: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778D14: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58778D16: jle 0x58778d3b
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x58778D18: mov bp, word ptr [esp + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58778D1D: lea ecx, [edi + 2]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x02
        // 0x58778D20: cmp byte ptr [ecx - 2], 5
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0xFE
        __asm _emit 0x05
        // 0x58778D24: jne 0x58778d30
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58778D26: cmp dh, byte ptr [ecx - 1]
        __asm _emit 0x3A
        __asm _emit 0x71
        __asm _emit 0xFF
        // 0x58778D29: jne 0x58778d30
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58778D2B: cmp bp, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x29
        // 0x58778D2E: je 0x58778d43
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58778D30: inc eax
        __asm _emit 0x40
        // 0x58778D31: add ecx, 0xb4
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778D37: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58778D39: jl 0x58778d20
        __asm _emit 0x7C
        __asm _emit 0xE5
        // 0x58778D3B: pop edi
        __asm _emit 0x5F
        // 0x58778D3C: pop esi
        __asm _emit 0x5E
        // 0x58778D3D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778D3F: pop ebp
        __asm _emit 0x5D
        // 0x58778D40: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58778D43: imul eax, eax, 0xb4
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778D49: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58778D4B: pop edi
        __asm _emit 0x5F
        // 0x58778D4C: pop esi
        __asm _emit 0x5E
        // 0x58778D4D: pop ebp
        __asm _emit 0x5D
        // 0x58778D4E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
