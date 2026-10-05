// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58778BE0 .. +0x51 bytes.
// Source symbol alias: FUN_58778be0.
extern "C" __declspec(naked) void FUN_58778be0() {
    __asm {
        // 0x58778BE0: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58778BE4: push ebp
        __asm _emit 0x55
        // 0x58778BE5: push esi
        __asm _emit 0x56
        // 0x58778BE6: push edi
        __asm _emit 0x57
        // 0x58778BE7: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58778BEA: jne 0x58778c1b
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x58778BEC: mov esi, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x30
        // 0x58778BEF: mov edi, dword ptr [ecx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x3C
        // 0x58778BF2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778BF4: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58778BF6: jle 0x58778c1b
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x58778BF8: mov bp, word ptr [esp + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58778BFD: lea ecx, [edi + 2]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x02
        // 0x58778C00: cmp byte ptr [ecx - 2], 2
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x58778C04: jne 0x58778c10
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58778C06: cmp dh, byte ptr [ecx - 1]
        __asm _emit 0x3A
        __asm _emit 0x71
        __asm _emit 0xFF
        // 0x58778C09: jne 0x58778c10
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58778C0B: cmp bp, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x29
        // 0x58778C0E: je 0x58778c23
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58778C10: inc eax
        __asm _emit 0x40
        // 0x58778C11: add ecx, 0xac
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778C17: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58778C19: jl 0x58778c00
        __asm _emit 0x7C
        __asm _emit 0xE5
        // 0x58778C1B: pop edi
        __asm _emit 0x5F
        // 0x58778C1C: pop esi
        __asm _emit 0x5E
        // 0x58778C1D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778C1F: pop ebp
        __asm _emit 0x5D
        // 0x58778C20: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58778C23: imul eax, eax, 0xac
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778C29: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58778C2B: pop edi
        __asm _emit 0x5F
        // 0x58778C2C: pop esi
        __asm _emit 0x5E
        // 0x58778C2D: pop ebp
        __asm _emit 0x5D
        // 0x58778C2E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
