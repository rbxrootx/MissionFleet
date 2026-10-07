// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 93 bytes in 1 exact ranges.
// Source symbol alias: FUN_587472c0.

// Ghidra body range 0x587472C0..0x5874731D; 93 mapped bytes.
extern "C" __declspec(naked) void FUN_587472c0_segment_00() {
    __asm {
        // 0x587472C0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587472C4: cmp eax, dword ptr [esp + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587472C8: jne 0x587472d4
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587472CA: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587472CE: cmp ecx, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587472D2: je 0x5874731a
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x587472D4: fild dword ptr [esp + 0xc]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587472D8: fisub dword ptr [esp + 4]
        __asm _emit 0xDA
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587472DC: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587472E0: fisub dword ptr [esp + 8]
        __asm _emit 0xDA
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587472E4: fchs
        __asm _emit 0xD9
        __asm _emit 0xE0
        // 0x587472E6: call 0x5897cd52
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x5A
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587472EB: fldz
        __asm _emit 0xD9
        __asm _emit 0xEE
        // 0x587472ED: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587472EF: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587472F1: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587472F4: jne 0x587472fc
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587472F6: fadd qword ptr [0x5898cf70]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587472FC: fmul qword ptr [0x5898cf68]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58747302: fmul qword ptr [0x5898cb38]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x38
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58747308: fadd qword ptr [0x5898cf60]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874730E: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747313: cmp eax, 0xe10
        __asm _emit 0x3D
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747318: jl 0x5874731c
        __asm _emit 0x7C
        __asm _emit 0x02
        // 0x5874731A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874731C: ret
        __asm _emit 0xC3
    }
}
