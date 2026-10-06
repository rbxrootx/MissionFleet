// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D6BD0 .. +0x30 bytes.
// Source symbol alias: FUN_587d6bd0.
extern "C" __declspec(naked) void FUN_587d6bd0() {
    __asm {
        // 0x587D6BD0: push esi
        __asm _emit 0x56
        // 0x587D6BD1: push edi
        __asm _emit 0x57
        // 0x587D6BD2: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587D6BD4: mov eax, dword ptr [edi + 0x1028]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6BDA: push 0x3c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6BDF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D6BE1: push eax
        __asm _emit 0x50
        // 0x587D6BE2: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x60
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D6BE7: mov edi, dword ptr [edi + 0x1028]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6BED: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D6BF1: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587D6BF4: mov ecx, 0xf2
        __asm _emit 0xB9
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6BF9: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587D6BFB: pop edi
        __asm _emit 0x5F
        // 0x587D6BFC: pop esi
        __asm _emit 0x5E
        // 0x587D6BFD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
