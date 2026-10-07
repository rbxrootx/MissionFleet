// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 108 bytes in 1 exact ranges.
// Source symbol alias: FUN_58747440.

// Ghidra body range 0x58747440..0x587474AC; 108 mapped bytes.
extern "C" __declspec(naked) void FUN_58747440_segment_00() {
    __asm {
        // 0x58747440: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58747444: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58747448: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5874744B: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5874744D: je 0x587474a8
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x5874744F: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58747451: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58747455: sub eax, dword ptr [esp + 0x10]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58747459: cdq
        __asm _emit 0x99
        // 0x5874745A: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5874745C: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58747460: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58747463: je 0x587474a8
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x58747465: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58747469: fadd qword ptr [esp + 0x24]
        __asm _emit 0xDC
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5874746D: call 0x5897cd64
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x58
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747472: fst qword ptr [esp]
        __asm _emit 0xDD
        __asm _emit 0x14
        __asm _emit 0x24
        // 0x58747475: call 0x5897cd58
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x58
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874747A: fmul qword ptr [esp + 0x1c]
        __asm _emit 0xDC
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874747E: fiadd dword ptr [esp + 0xc]
        __asm _emit 0xDA
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58747482: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x58
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747487: fld qword ptr [esp]
        __asm _emit 0xDD
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x5874748A: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874748E: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x58747490: call 0x5897cd5e
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x58
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747495: fmul qword ptr [esp + 0x1c]
        __asm _emit 0xDC
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58747499: fiadd dword ptr [esp + 0x10]
        __asm _emit 0xDA
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874749D: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x57
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587474A2: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587474A6: mov dword ptr [edx], eax
        __asm _emit 0x89
        __asm _emit 0x02
        // 0x587474A8: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587474AB: ret
        __asm _emit 0xC3
    }
}
