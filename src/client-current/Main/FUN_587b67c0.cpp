// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B67C0 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_587b67c0() {
    __asm {
        // 0x587B67C0: push esi
        __asm _emit 0x56
        // 0x587B67C1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B67C3: mov dword ptr [esi], 0x5899a0cc
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xCC
        __asm _emit 0xA0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B67C9: call 0x589038b0
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xD0
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B67CE: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x587B67D3: je 0x587b67de
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587B67D5: push esi
        __asm _emit 0x56
        // 0x587B67D6: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x64
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B67DB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B67DE: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587B67E0: pop esi
        __asm _emit 0x5E
        // 0x587B67E1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
