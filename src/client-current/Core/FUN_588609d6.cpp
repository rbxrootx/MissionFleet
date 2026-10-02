// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588609D6 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_588609d6() {
    __asm {
        // 0x588609D6: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588609D8: push esi
        __asm _emit 0x56
        // 0x588609D9: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588609DB: call 0x58860d25
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588609E0: lea ecx, [esi + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x588609E3: call 0x5886074d
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588609E8: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588609EB: je 0x588609fe
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588609ED: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588609F0: je 0x588609f6
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588609F2: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x588609F4: pop esi
        __asm _emit 0x5E
        // 0x588609F5: ret
        __asm _emit 0xC3
        // 0x588609F6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588609F8: pop esi
        __asm _emit 0x5E
        // 0x588609F9: jmp 0x5885d23c
        __asm _emit 0xE9
        __asm _emit 0x3E
        __asm _emit 0xC8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588609FE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58860A00: pop esi
        __asm _emit 0x5E
        // 0x58860A01: jmp 0x5885d16c
        __asm _emit 0xE9
        __asm _emit 0x66
        __asm _emit 0xC7
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
