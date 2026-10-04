// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589080E0 .. +0x28 bytes.
// Source symbol alias: FUN_589080e0.
extern "C" __declspec(naked) void FUN_589080e0() {
    __asm {
        // 0x589080E0: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x589080E3: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589080E7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x589080E9: jle 0x589080fc
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x589080EB: jmp 0x589080f0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x589080ED: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x589080F0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589080F2: je 0x58908106
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x589080F4: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x589080F7: dec ecx
        __asm _emit 0x49
        // 0x589080F8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x589080FA: jg 0x589080f0
        __asm _emit 0x7F
        __asm _emit 0xF4
        // 0x589080FC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589080FE: je 0x58908106
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58908100: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58908103: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58908106: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
    }
}
