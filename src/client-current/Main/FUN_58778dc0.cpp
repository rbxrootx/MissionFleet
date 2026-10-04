// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58778DC0 .. +0x57 bytes.
// Source symbol alias: FUN_58778dc0.
extern "C" __declspec(naked) void FUN_58778dc0() {
    __asm {
        // 0x58778DC0: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58778DC4: push ebp
        __asm _emit 0x55
        // 0x58778DC5: push esi
        __asm _emit 0x56
        // 0x58778DC6: push edi
        __asm _emit 0x57
        // 0x58778DC7: cmp dl, 0xb
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x58778DCA: jne 0x58778e01
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x58778DCC: mov esi, dword ptr [ecx + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778DD2: mov edi, dword ptr [ecx + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778DD8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778DDA: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58778DDC: jle 0x58778e01
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x58778DDE: mov bp, word ptr [esp + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58778DE3: lea ecx, [edi + 2]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x02
        // 0x58778DE6: cmp byte ptr [ecx - 2], 0xb
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0xFE
        __asm _emit 0x0B
        // 0x58778DEA: jne 0x58778df6
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58778DEC: cmp dh, byte ptr [ecx - 1]
        __asm _emit 0x3A
        __asm _emit 0x71
        __asm _emit 0xFF
        // 0x58778DEF: jne 0x58778df6
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58778DF1: cmp bp, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x29
        // 0x58778DF4: je 0x58778e09
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58778DF6: inc eax
        __asm _emit 0x40
        // 0x58778DF7: add ecx, 0xac
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778DFD: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58778DFF: jl 0x58778de6
        __asm _emit 0x7C
        __asm _emit 0xE5
        // 0x58778E01: pop edi
        __asm _emit 0x5F
        // 0x58778E02: pop esi
        __asm _emit 0x5E
        // 0x58778E03: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778E05: pop ebp
        __asm _emit 0x5D
        // 0x58778E06: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58778E09: imul eax, eax, 0xac
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778E0F: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58778E11: pop edi
        __asm _emit 0x5F
        // 0x58778E12: pop esi
        __asm _emit 0x5E
        // 0x58778E13: pop ebp
        __asm _emit 0x5D
        // 0x58778E14: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
