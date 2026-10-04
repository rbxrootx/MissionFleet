// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877EAA0 .. +0x36 bytes.
// Source symbol alias: FUN_5877eaa0.
extern "C" __declspec(naked) void FUN_5877eaa0() {
    __asm {
        // 0x5877EAA0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877EAA4: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5877EAA8: push esi
        __asm _emit 0x56
        // 0x5877EAA9: push eax
        __asm _emit 0x50
        // 0x5877EAAA: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877EAAE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877EAB0: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877EAB4: push ecx
        __asm _emit 0x51
        // 0x5877EAB5: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877EAB9: push edx
        __asm _emit 0x52
        // 0x5877EABA: push eax
        __asm _emit 0x50
        // 0x5877EABB: push ecx
        __asm _emit 0x51
        // 0x5877EABC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877EABE: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x31
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877EAC3: mov dword ptr [esi], 0x589969ec
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xEC
        __asm _emit 0x69
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877EAC9: mov dword ptr [esi + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877EAD0: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5877EAD2: pop esi
        __asm _emit 0x5E
        // 0x5877EAD3: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
