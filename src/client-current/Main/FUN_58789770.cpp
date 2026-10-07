// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58789770 .. +0x13 bytes.
// Source symbol alias: FUN_58789770.
extern "C" __declspec(naked) void FUN_58789770() {
    __asm {
        // 0x58789770: mov eax, dword ptr [ecx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x58
        // 0x58789773: mov dword ptr [ecx + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x5C
        // 0x58789776: mov dword ptr [ecx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x58789779: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878977B: je 0x58789782
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5878977D: or word ptr [ecx + 0x64], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x64
        __asm _emit 0x01
        // 0x58789782: ret
        __asm _emit 0xC3
    }
}
