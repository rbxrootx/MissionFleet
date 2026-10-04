// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C9D40 .. +0x39 bytes.
// Source symbol alias: FUN_587c9d40.
extern "C" __declspec(naked) void FUN_587c9d40() {
    __asm {
        // 0x587C9D40: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C9D44: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587C9D48: push esi
        __asm _emit 0x56
        // 0x587C9D49: push eax
        __asm _emit 0x50
        // 0x587C9D4A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587C9D4E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587C9D50: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C9D54: push ecx
        __asm _emit 0x51
        // 0x587C9D55: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587C9D59: push edx
        __asm _emit 0x52
        // 0x587C9D5A: push eax
        __asm _emit 0x50
        // 0x587C9D5B: push ecx
        __asm _emit 0x51
        // 0x587C9D5C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587C9D5E: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xD3
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C9D63: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587C9D67: mov dword ptr [esi], 0x5899b044
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x44
        __asm _emit 0xB0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587C9D6D: mov dword ptr [esi + 0xfc], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9D73: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587C9D75: pop esi
        __asm _emit 0x5E
        // 0x587C9D76: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
