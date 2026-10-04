// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875BB10 .. +0x5C bytes.
// Source symbol alias: FUN_5875bb10.
extern "C" __declspec(naked) void FUN_5875bb10() {
    __asm {
        // 0x5875BB10: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875BB14: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875BB18: push esi
        __asm _emit 0x56
        // 0x5875BB19: push eax
        __asm _emit 0x50
        // 0x5875BB1A: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875BB1E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875BB20: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875BB24: push ecx
        __asm _emit 0x51
        // 0x5875BB25: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875BB29: push edx
        __asm _emit 0x52
        // 0x5875BB2A: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875BB2E: push eax
        __asm _emit 0x50
        // 0x5875BB2F: push ecx
        __asm _emit 0x51
        // 0x5875BB30: push edx
        __asm _emit 0x52
        // 0x5875BB31: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875BB33: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x76
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875BB38: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875BB3A: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5875BB3D: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5875BB40: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5875BB43: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BB48: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5875BB4B: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5875BB4E: mov eax, 3
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BB53: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5875BB56: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5875BB59: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875BB5D: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5875BB60: mov dword ptr [esi], 0x5898d8cc
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xCC
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875BB66: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5875BB68: pop esi
        __asm _emit 0x5E
        // 0x5875BB69: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
