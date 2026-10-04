// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58908140 .. +0x29 bytes.
// Source symbol alias: FUN_58908140.
extern "C" __declspec(naked) void FUN_58908140() {
    __asm {
        // 0x58908140: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x58908143: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58908147: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58908149: jle 0x5890815c
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5890814B: jmp 0x58908150
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5890814D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58908150: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908152: je 0x58908166
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58908154: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x58908157: dec ecx
        __asm _emit 0x49
        // 0x58908158: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5890815A: jg 0x58908150
        __asm _emit 0x7F
        __asm _emit 0xF4
        // 0x5890815C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890815E: je 0x58908166
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58908160: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58908163: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58908166: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
    }
}
