// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5886CC10 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5886cc10() {
    __asm {
        // 0x5886CC10: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5886CC12: push ebp
        __asm _emit 0x55
        // 0x5886CC13: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5886CC15: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5886CC19: je 0x5886cc48
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x5886CC1B: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5886CC1E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5886CC20: push dword ptr [0x58969c70]
        __asm _emit 0xFF
        __asm _emit 0x35
        __asm _emit 0x70
        __asm _emit 0x9C
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5886CC26: call dword ptr [0x58894164]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5886CC2C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5886CC2E: jne 0x5886cc48
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5886CC30: push esi
        __asm _emit 0x56
        // 0x5886CC31: call dword ptr [0x588941fc]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5886CC37: push eax
        __asm _emit 0x50
        // 0x5886CC38: call 0x588623b4
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x57
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5886CC3D: pop ecx
        __asm _emit 0x59
        // 0x5886CC3E: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5886CC40: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x58
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5886CC45: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x5886CC47: pop esi
        __asm _emit 0x5E
        // 0x5886CC48: pop ebp
        __asm _emit 0x5D
        // 0x5886CC49: ret
        __asm _emit 0xC3
    }
}
