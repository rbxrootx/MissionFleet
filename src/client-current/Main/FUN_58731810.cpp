// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58731810 .. +0x25 bytes.
// Source symbol alias: FUN_58731810.
// Caller evidence: 0x5873FE80, 0x5877EC80, and 0x588D4300.
// Mechanically this is a signed bounds check plus a nullable DWORD-table lookup:
// count at receiver +0x170, table pointer at +0x194, one stack index argument.
// Receiver and table semantics are unresolved; see docs/current-main-indexed-pointer-lookup.md.
extern "C" __declspec(naked) void FUN_58731810() {
    __asm {
        // 0x58731810: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58731814: cmp dword ptr [ecx + 0x170], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873181A: jle 0x58731830
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5873181C: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5873181E: jl 0x58731830
        __asm _emit 0x7C
        __asm _emit 0x10
        // 0x58731820: mov eax, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731826: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58731828: je 0x58731830
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5873182A: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x5873182D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58731830: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58731832: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
