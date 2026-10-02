// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5886E0A9 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_5886e0a9() {
    __asm {
        // 0x5886E0A9: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5886E0AB: push ebp
        __asm _emit 0x55
        // 0x5886E0AC: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5886E0AE: push ecx
        __asm _emit 0x51
        // 0x5886E0AF: push dword ptr [ebp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5886E0B2: lea eax, [ebp - 4]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5886E0B5: push dword ptr [ebp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5886E0B8: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5886E0BB: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5886E0BE: push eax
        __asm _emit 0x50
        // 0x5886E0BF: call 0x5886de19
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5886E0C4: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5886E0C6: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5886E0C9: cmp edx, 4
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5886E0CC: ja 0x5886e0e8
        __asm _emit 0x77
        __asm _emit 0x1A
        // 0x5886E0CE: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5886E0D1: cmp ecx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886E0D7: jbe 0x5886e0de
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5886E0D9: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886E0DE: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5886E0E1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5886E0E3: je 0x5886e0e8
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x5886E0E5: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x5886E0E8: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5886E0EA: leave
        __asm _emit 0xC9
        // 0x5886E0EB: ret
        __asm _emit 0xC3
    }
}
