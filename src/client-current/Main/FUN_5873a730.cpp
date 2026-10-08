// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 48 bytes in 1 exact ranges.
// Source symbol alias: FUN_5873a730.

// Ghidra body range 0x5873A730..0x5873A760; 48 mapped bytes.
extern "C" __declspec(naked) void FUN_5873a730_segment_00() {
    __asm {
        // 0x5873A730: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5873A734: fld qword ptr [esp + 4]
        __asm _emit 0xDD
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5873A738: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5873A73A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873A73C: jge 0x5873a740
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x5873A73E: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x5873A740: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x5873A742: fld st(0)
        __asm _emit 0xD9
        __asm _emit 0xC0
        // 0x5873A744: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5873A746: je 0x5873a74a
        __asm _emit 0x74
        __asm _emit 0x02
        // 0x5873A748: fmul st(2)
        __asm _emit 0xD8
        __asm _emit 0xCA
        // 0x5873A74A: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x5873A74C: je 0x5873a754
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5873A74E: fld st(2)
        __asm _emit 0xD9
        __asm _emit 0xC2
        // 0x5873A750: fmulp st(3)
        __asm _emit 0xDE
        __asm _emit 0xCB
        // 0x5873A752: jmp 0x5873a744
        __asm _emit 0xEB
        __asm _emit 0xF0
        // 0x5873A754: fstp st(2)
        __asm _emit 0xDD
        __asm _emit 0xDA
        // 0x5873A756: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873A758: jge 0x5873a75d
        __asm _emit 0x7D
        __asm _emit 0x03
        // 0x5873A75A: fdivrp st(1)
        __asm _emit 0xDE
        __asm _emit 0xF1
        // 0x5873A75C: ret
        __asm _emit 0xC3
        // 0x5873A75D: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x5873A75F: ret
        __asm _emit 0xC3
    }
}
