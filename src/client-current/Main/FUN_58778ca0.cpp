// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58778CA0 .. +0x51 bytes.
// Source symbol alias: FUN_58778ca0.
extern "C" __declspec(naked) void FUN_58778ca0() {
    __asm {
        // 0x58778CA0: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58778CA4: push ebp
        __asm _emit 0x55
        // 0x58778CA5: push esi
        __asm _emit 0x56
        // 0x58778CA6: push edi
        __asm _emit 0x57
        // 0x58778CA7: cmp dl, 3
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x58778CAA: jne 0x58778cdb
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x58778CAC: mov esi, dword ptr [ecx + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x44
        // 0x58778CAF: mov edi, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x58778CB2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778CB4: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58778CB6: jle 0x58778cdb
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x58778CB8: mov bp, word ptr [esp + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58778CBD: lea ecx, [edi + 2]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x02
        // 0x58778CC0: cmp byte ptr [ecx - 2], 3
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x58778CC4: jne 0x58778cd0
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58778CC6: cmp dh, byte ptr [ecx - 1]
        __asm _emit 0x3A
        __asm _emit 0x71
        __asm _emit 0xFF
        // 0x58778CC9: jne 0x58778cd0
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58778CCB: cmp bp, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x29
        // 0x58778CCE: je 0x58778ce3
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58778CD0: inc eax
        __asm _emit 0x40
        // 0x58778CD1: add ecx, 0xa4
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778CD7: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58778CD9: jl 0x58778cc0
        __asm _emit 0x7C
        __asm _emit 0xE5
        // 0x58778CDB: pop edi
        __asm _emit 0x5F
        // 0x58778CDC: pop esi
        __asm _emit 0x5E
        // 0x58778CDD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778CDF: pop ebp
        __asm _emit 0x5D
        // 0x58778CE0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58778CE3: imul eax, eax, 0xa4
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778CE9: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58778CEB: pop edi
        __asm _emit 0x5F
        // 0x58778CEC: pop esi
        __asm _emit 0x5E
        // 0x58778CED: pop ebp
        __asm _emit 0x5D
        // 0x58778CEE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
