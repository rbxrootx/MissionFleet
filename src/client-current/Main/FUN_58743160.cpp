// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 67 bytes in 1 exact ranges.
// Source symbol alias: FUN_58743160.

// Ghidra body range 0x58743160..0x587431A3; 67 mapped bytes.
extern "C" __declspec(naked) void FUN_58743160_segment_00() {
    __asm {
        // 0x58743160: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58743163: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58743165: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58743167: jle 0x587431a2
        __asm _emit 0x7E
        __asm _emit 0x39
        // 0x58743169: push ebx
        __asm _emit 0x53
        // 0x5874316A: push esi
        __asm _emit 0x56
        // 0x5874316B: push edi
        __asm _emit 0x57
        // 0x5874316C: lea esi, [ecx + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x71
        __asm _emit 0x40
        // 0x5874316F: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58743171: cmp byte ptr [esi - 0x2c], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0xD4
        __asm _emit 0x00
        // 0x58743175: je 0x58743197
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58743177: mov ebx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x5874317A: mov edx, dword ptr [esi - 0x34]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0xCC
        // 0x5874317D: movzx edx, word ptr [ebx + edx*4 + 0xac0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x93
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743185: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874318B: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x5874318D: sub ebx, dword ptr [esi]
        __asm _emit 0x2B
        __asm _emit 0x1E
        // 0x5874318F: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58743191: jle 0x58743197
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58743193: sub edx, dword ptr [esi]
        __asm _emit 0x2B
        __asm _emit 0x16
        // 0x58743195: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58743197: add esi, 0x38
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x38
        // 0x5874319A: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5874319D: jne 0x58743171
        __asm _emit 0x75
        __asm _emit 0xD2
        // 0x5874319F: pop edi
        __asm _emit 0x5F
        // 0x587431A0: pop esi
        __asm _emit 0x5E
        // 0x587431A1: pop ebx
        __asm _emit 0x5B
        // 0x587431A2: ret
        __asm _emit 0xC3
    }
}
