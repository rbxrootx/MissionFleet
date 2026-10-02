// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A740 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5885a740() {
    __asm {
        // 0x5885A740: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885A742: push ebp
        __asm _emit 0x55
        // 0x5885A743: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885A745: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x28
        // 0x5885A748: lea ecx, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5885A74B: push esi
        __asm _emit 0x56
        // 0x5885A74C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885A74E: call 0x58850c9f
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x65
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A753: lea eax, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD8
        // 0x5885A756: push eax
        __asm _emit 0x50
        // 0x5885A757: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5885A75A: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885A75D: cdq
        __asm _emit 0x99
        // 0x5885A75E: push edx
        __asm _emit 0x52
        // 0x5885A75F: push eax
        __asm _emit 0x50
        // 0x5885A760: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A763: call 0x5885a497
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A768: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5885A76B: lea ecx, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5885A76E: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5885A770: call 0x58850ce7
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x65
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A775: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885A777: pop esi
        __asm _emit 0x5E
        // 0x5885A778: leave
        __asm _emit 0xC9
        // 0x5885A779: ret
        __asm _emit 0xC3
    }
}
