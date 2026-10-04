// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Corrected Ghidra function-body extent: 0x5878A160 .. +0x27 bytes.
// Source symbol alias: FUN_5878a160.
extern "C" __declspec(naked) void FUN_5878a160() {
    __asm {
        // 0x5878A160: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5878A163: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878A165: je 0x5878a182
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5878A167: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5878A16B: jmp 0x5878a170
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5878A16D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5878A170: movzx edx, word ptr [eax + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878A177: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5878A179: je 0x5878a184
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5878A17B: mov eax, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x78
        // 0x5878A17E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878A180: jne 0x5878a170
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x5878A182: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878A184: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
