// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588613D7 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_588613d7() {
    __asm {
        // 0x588613D7: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588613D9: push ebp
        __asm _emit 0x55
        // 0x588613DA: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588613DC: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x588613DF: cmp eax, dword ptr [ecx]
        __asm _emit 0x3B
        __asm _emit 0x01
        // 0x588613E1: je 0x588613f2
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588613E3: cmp eax, dword ptr [ecx + 4]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588613E6: jne 0x588613ee
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x588613E8: cmp dword ptr [ebp + 8], -1
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0xFF
        // 0x588613EC: je 0x588613f2
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588613EE: dec eax
        __asm _emit 0x48
        // 0x588613EF: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x588613F2: pop ebp
        __asm _emit 0x5D
        // 0x588613F3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
