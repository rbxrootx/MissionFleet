// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58759F60 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_58759f60() {
    __asm {
        // 0x58759F60: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58759F64: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58759F68: push esi
        __asm _emit 0x56
        // 0x58759F69: push eax
        __asm _emit 0x50
        // 0x58759F6A: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58759F6E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58759F70: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58759F74: push ecx
        __asm _emit 0x51
        // 0x58759F75: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58759F79: push edx
        __asm _emit 0x52
        // 0x58759F7A: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58759F7E: push eax
        __asm _emit 0x50
        // 0x58759F7F: push ecx
        __asm _emit 0x51
        // 0x58759F80: push edx
        __asm _emit 0x52
        // 0x58759F81: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58759F83: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x92
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58759F88: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58759F8A: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58759F90: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58759F95: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58759F98: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58759F9B: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58759F9E: mov dword ptr [esi], 0x5898d7a0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xA0
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58759FA4: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58759FA6: pop esi
        __asm _emit 0x5E
        // 0x58759FA7: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
