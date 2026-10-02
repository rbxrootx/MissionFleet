// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A3A6 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_5885a3a6() {
    __asm {
        // 0x5885A3A6: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885A3A8: push ebp
        __asm _emit 0x55
        // 0x5885A3A9: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885A3AB: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x28
        // 0x5885A3AE: lea ecx, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5885A3B1: push esi
        __asm _emit 0x56
        // 0x5885A3B2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885A3B4: call 0x58850c9f
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A3B9: lea eax, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD8
        // 0x5885A3BC: push eax
        __asm _emit 0x50
        // 0x5885A3BD: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885A3C0: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A3C3: call 0x5885a245
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A3C8: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885A3CB: lea ecx, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5885A3CE: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5885A3D0: call 0x58850ce7
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x69
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A3D5: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885A3D7: pop esi
        __asm _emit 0x5E
        // 0x5885A3D8: leave
        __asm _emit 0xC9
        // 0x5885A3D9: ret
        __asm _emit 0xC3
    }
}
