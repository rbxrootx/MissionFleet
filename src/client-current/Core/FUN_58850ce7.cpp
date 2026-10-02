// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58850CE7 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_58850ce7() {
    __asm {
        // 0x58850CE7: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58850CE9: push esi
        __asm _emit 0x56
        // 0x58850CEA: push edi
        __asm _emit 0x57
        // 0x58850CEB: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58850CED: cmp byte ptr [edi + 0x14], 2
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x14
        __asm _emit 0x02
        // 0x58850CF1: jne 0x58850cfc
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58850CF3: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58850CF5: and dword ptr [eax + 0x350], 0xfffffffd
        __asm _emit 0x83
        __asm _emit 0xA0
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFD
        // 0x58850CFC: cmp byte ptr [edi + 0x1c], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58850D00: je 0x58850d0d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58850D02: mov esi, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x18
        // 0x58850D05: call 0x58850d92
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850D0A: mov dword ptr [eax + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x58850D0D: cmp byte ptr [edi + 0x24], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58850D11: je 0x58850d20
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58850D13: mov esi, dword ptr [edi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x20
        // 0x58850D16: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58850D18: call 0x58850d92
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850D1D: mov dword ptr [eax + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x14
        // 0x58850D20: pop edi
        __asm _emit 0x5F
        // 0x58850D21: pop esi
        __asm _emit 0x5E
        // 0x58850D22: ret
        __asm _emit 0xC3
    }
}
