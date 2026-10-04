// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58908600 .. +0x44 bytes.
// Source symbol alias: FUN_58908600.
extern "C" __declspec(naked) void FUN_58908600() {
    __asm {
        // 0x58908600: mov eax, dword ptr [ecx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908606: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908608: jne 0x5890861a
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5890860A: mov eax, dword ptr [ecx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x7C
        // 0x5890860D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5890860F: mov dword ptr [ecx + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908615: mov eax, dword ptr [edx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x3C
        // 0x58908618: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x5890861A: cmp dword ptr [eax + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5890861E: je 0x58908643
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x58908620: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908626: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58908628: jne 0x58908633
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x5890862A: mov edx, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x10
        // 0x5890862D: mov dword ptr [ecx + 0x80], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908633: mov eax, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x10
        // 0x58908636: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58908638: mov dword ptr [ecx + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890863E: mov eax, dword ptr [edx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x3C
        // 0x58908641: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x58908643: ret
        __asm _emit 0xC3
    }
}
