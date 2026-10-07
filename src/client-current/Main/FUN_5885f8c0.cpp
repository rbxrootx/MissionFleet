// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5885F8C0 .. +0x4D bytes.
// Source symbol alias: FUN_5885f8c0.
extern "C" __declspec(naked) void FUN_5885f8c0() {
    __asm {
        // 0x5885F8C0: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885F8C5: cmp dword ptr [eax + 0x2e4], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F8CC: je 0x5885f90a
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5885F8CE: push esi
        __asm _emit 0x56
        // 0x5885F8CF: call dword ptr [0x5898c42c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5885F8D5: mov ecx, dword ptr [0x58a28380]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885F8DB: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5885F8DD: add ecx, 0x7d0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F8E3: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x5885F8E5: jae 0x5885f903
        __asm _emit 0x73
        __asm _emit 0x1C
        // 0x5885F8E7: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5885F8EB: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885F8F0: mov ecx, dword ptr [eax + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F8F6: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F8FB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885F8FD: push edx
        __asm _emit 0x52
        // 0x5885F8FE: call 0x5877aba0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xB2
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5885F903: mov dword ptr [0x58a28380], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885F909: pop esi
        __asm _emit 0x5E
        // 0x5885F90A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
