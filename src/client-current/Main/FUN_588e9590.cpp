// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E9590 .. +0x27 bytes.
// Source symbol alias: FUN_588e9590.
extern "C" __declspec(naked) void FUN_588e9590() {
    __asm {
        // 0x588E9590: cmp dword ptr [esp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588E9595: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E9599: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588E959D: lea eax, [eax + edx*2 + 0x560]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E95A4: mov dx, word ptr [esp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588E95A9: mov word ptr [ecx + eax*2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x41
        // 0x588E95AD: je 0x588e95b4
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588E95AF: call 0x588e8570
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E95B4: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
