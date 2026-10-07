// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 99 bytes in 1 exact ranges.
// Source symbol alias: FUN_587358c0.

// Ghidra body range 0x587358C0..0x58735923; 99 mapped bytes.
extern "C" __declspec(naked) void FUN_587358c0_segment_00() {
    __asm {
        // 0x587358C0: movzx eax, word ptr [esp + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587358C5: movzx ecx, word ptr [esp + 8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587358CA: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587358CE: fild dword ptr [esp + 4]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587358D2: mov dword ptr [esp + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587358D6: fild dword ptr [esp + 4]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587358DA: fdiv qword ptr [0x5898cae0]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587358E0: fmul st(1)
        __asm _emit 0xD8
        __asm _emit 0xC9
        // 0x587358E2: faddp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC1
        // 0x587358E4: fld qword ptr [0x5898cad8]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xD8
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587358EA: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587358EC: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587358EE: test ah, 5
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x05
        // 0x587358F1: jp 0x587358fd
        __asm _emit 0x7A
        __asm _emit 0x0A
        // 0x587358F3: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x587358F5: mov eax, 0xfffa
        __asm _emit 0xB8
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587358FA: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587358FD: fnstcw word ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58735901: movzx eax, word ptr [esp + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58735906: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873590B: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5873590F: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58735913: fistp dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58735917: mov ax, word ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5873591C: fldcw word ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58735920: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
