// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D2AB0 .. +0x91 bytes.
// Source symbol alias: FUN_588d2ab0.
extern "C" __declspec(naked) void FUN_588d2ab0() {
    __asm {
        // 0x588D2AB0: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588D2AB4: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588D2AB9: imul edx, edx, 0x190
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2ABF: mov word ptr [ecx + 0x1b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2AC6: mov dword ptr [ecx + 0x90], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2ACC: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x588D2AD0: jne 0x588d2b3e
        __asm _emit 0x75
        __asm _emit 0x6C
        // 0x588D2AD2: mov edx, dword ptr [ecx + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2AD8: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2ADE: cmp edx, 0x3e8
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2AE4: push esi
        __asm _emit 0x56
        // 0x588D2AE5: jle 0x588d2b0c
        __asm _emit 0x7E
        __asm _emit 0x25
        // 0x588D2AE7: mov esi, dword ptr [ecx + 0x1c8]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2AED: cmp esi, 0x7d0
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2AF3: jle 0x588d2b05
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588D2AF5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D2AF7: cmp esi, 0xbb8
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2AFD: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x588D2B00: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x588D2B03: jmp 0x588d2b0e
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x588D2B05: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2B0A: jmp 0x588d2b0e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D2B0C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D2B0E: mov dword ptr [ecx + 0x204], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2B14: mov dword ptr [ecx + 0x214], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2B1A: mov dword ptr [ecx + 0x21c], 9
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2B24: pop esi
        __asm _emit 0x5E
        // 0x588D2B25: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588D2B27: je 0x588d2b35
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588D2B29: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0C
        // 0x588D2B2C: mov dword ptr [ecx + 0x218], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2B32: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588D2B35: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x588D2B38: mov dword ptr [ecx + 0x218], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2B3E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
