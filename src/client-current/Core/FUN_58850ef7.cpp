// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58850EF7 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58850ef7() {
    __asm {
        // 0x58850EF7: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58850EF9: push ebp
        __asm _emit 0x55
        // 0x58850EFA: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58850EFC: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x28
        // 0x58850EFF: lea ecx, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x58850F02: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58850F04: call 0x58850c9f
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850F09: lea eax, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD8
        // 0x58850F0C: push eax
        __asm _emit 0x50
        // 0x58850F0D: push dword ptr [ebp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x58850F10: push dword ptr [ebp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58850F13: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58850F16: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58850F19: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58850F1C: call 0x58850f2e
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850F21: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58850F24: lea ecx, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x58850F27: call 0x58850ce7
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850F2C: leave
        __asm _emit 0xC9
        // 0x58850F2D: ret
        __asm _emit 0xC3
    }
}
