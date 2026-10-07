// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E5F80 .. +0x30 bytes.
// Source symbol alias: FUN_587e5f80.
extern "C" __declspec(naked) void FUN_587e5f80() {
    __asm {
        // 0x587E5F80: push esi
        __asm _emit 0x56
        // 0x587E5F81: push edi
        __asm _emit 0x57
        // 0x587E5F82: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587E5F86: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587E5F88: mov eax, dword ptr [esi + edi*4 + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5F8F: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5F95: push eax
        __asm _emit 0x50
        // 0x587E5F96: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xCF
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E5F9B: mov esi, dword ptr [esi + edi*4 + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5FA2: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5FA7: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587E5FAB: pop edi
        __asm _emit 0x5F
        // 0x587E5FAC: pop esi
        __asm _emit 0x5E
        // 0x587E5FAD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
