// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 71 bytes in 1 exact ranges.
// Source symbol alias: FUN_58747270.

// Ghidra body range 0x58747270..0x587472B7; 71 mapped bytes.
extern "C" __declspec(naked) void FUN_58747270_segment_00() {
    __asm {
        // 0x58747270: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58747273: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58747277: fdiv qword ptr [0x5898cb38]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0x38
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874727D: fmul qword ptr [0x5898cf58]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x58
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58747283: fst qword ptr [esp]
        __asm _emit 0xDD
        __asm _emit 0x14
        __asm _emit 0x24
        // 0x58747286: call 0x5897cd5e
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x5A
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874728B: fmul qword ptr [esp + 0x20]
        __asm _emit 0xDC
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874728F: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58747293: fchs
        __asm _emit 0xD9
        __asm _emit 0xE0
        // 0x58747295: fadd qword ptr [esp + 0xc]
        __asm _emit 0xDC
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58747299: fstp qword ptr [eax]
        __asm _emit 0xDD
        __asm _emit 0x18
        // 0x5874729B: fld qword ptr [esp]
        __asm _emit 0xDD
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x5874729E: call 0x5897cd58
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x5A
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587472A3: fmul qword ptr [esp + 0x20]
        __asm _emit 0xDC
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587472A7: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587472AB: fchs
        __asm _emit 0xD9
        __asm _emit 0xE0
        // 0x587472AD: fadd qword ptr [esp + 0x14]
        __asm _emit 0xDC
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587472B1: fstp qword ptr [ecx]
        __asm _emit 0xDD
        __asm _emit 0x19
        // 0x587472B3: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587472B6: ret
        __asm _emit 0xC3
    }
}
