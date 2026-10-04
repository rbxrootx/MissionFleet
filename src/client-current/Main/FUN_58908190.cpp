// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58908190 .. +0x26 bytes.
// Source symbol alias: FUN_58908190.
extern "C" __declspec(naked) void FUN_58908190() {
    __asm {
        // 0x58908190: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58908194: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x58908197: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58908199: jle 0x589081ac
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5890819B: jmp 0x589081a0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5890819D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x589081A0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589081A2: je 0x589081b6
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x589081A4: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x589081A7: dec edx
        __asm _emit 0x4A
        // 0x589081A8: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x589081AA: jg 0x589081a0
        __asm _emit 0x7F
        __asm _emit 0xF4
        // 0x589081AC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589081AE: je 0x589081b6
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x589081B0: mov dword ptr [ecx + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
