// Instruction stream reconstructed from the mapped Main.dll.
// Audited executable extent: 0x588F4090 .. +0x29 bytes.
// The original 0x26-byte index stopped after mov eax, edx; ret 4 at +0x26 follows
// immediately, before the 0xCC alignment fill and next function at 0x588F40C0.
// Source symbol alias: FUN_588f4090.
extern "C" __declspec(naked) void FUN_588f4090() {
    __asm {
        // 0x588F4090: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x588F4093: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F4095: je 0x588f40af
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x588F4097: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F409B: jmp 0x588f40a0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588F409D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588F40A0: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588F40A3: cmp dword ptr [edx + 0x50], ecx
        __asm _emit 0x39
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x588F40A6: je 0x588f40b4
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588F40A8: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588F40AB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F40AD: jne 0x588f40a0
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588F40AF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F40B1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F40B4: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F40B6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
