// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A706 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5885a706() {
    __asm {
        // 0x5885A706: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885A708: push ebp
        __asm _emit 0x55
        // 0x5885A709: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885A70B: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x28
        // 0x5885A70E: lea ecx, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5885A711: push esi
        __asm _emit 0x56
        // 0x5885A712: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885A714: call 0x58850c9f
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x65
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A719: lea eax, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD8
        // 0x5885A71C: push eax
        __asm _emit 0x50
        // 0x5885A71D: push dword ptr [ebp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5885A720: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5885A723: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885A726: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A729: call 0x5885a497
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A72E: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5885A731: lea ecx, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5885A734: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5885A736: call 0x58850ce7
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x65
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A73B: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885A73D: pop esi
        __asm _emit 0x5E
        // 0x5885A73E: leave
        __asm _emit 0xC9
        // 0x5885A73F: ret
        __asm _emit 0xC3
    }
}
