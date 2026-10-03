// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F4060 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_588f4060() {
    __asm {
        // 0x588F4060: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588F4063: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F4065: je 0x588f4084
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x588F4067: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F406B: jmp 0x588f4070
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588F406D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588F4070: mov edx, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x48
        // 0x588F4073: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x588F4076: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x588F4078: je 0x588f4086
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588F407A: mov eax, dword ptr [eax + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4080: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F4082: jne 0x588f4070
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x588F4084: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F4086: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
