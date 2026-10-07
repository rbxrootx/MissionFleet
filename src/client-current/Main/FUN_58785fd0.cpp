// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 90 bytes in 1 exact ranges.
// Source symbol alias: FUN_58785fd0.

// Ghidra body range 0x58785FD0..0x5878602A; 90 mapped bytes.
extern "C" __declspec(naked) void FUN_58785fd0_segment_00() {
    __asm {
        // 0x58785FD0: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58785FD3: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58785FD6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58785FD8: je 0x58786024
        __asm _emit 0x74
        __asm _emit 0x4A
        // 0x58785FDA: mov eax, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x48
        // 0x58785FDD: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58785FE1: fild dword ptr [esp + 4]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58785FE5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58785FE7: jge 0x58785fef
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58785FE9: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58785FEF: fdiv qword ptr [0x58996aa0]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0xA0
        __asm _emit 0x6A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58785FF5: fmul qword ptr [0x5898cae0]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58785FFB: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58785FFF: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58786004: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786009: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5878600D: fldcw word ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58786011: fistp qword ptr [esp + 4]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58786015: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58786019: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5878601C: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58786020: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58786023: ret
        __asm _emit 0xC3
        // 0x58786024: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58786026: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58786029: ret
        __asm _emit 0xC3
    }
}
