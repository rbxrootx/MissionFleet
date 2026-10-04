// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876E4C0 .. +0x3D bytes.
// Source symbol alias: FUN_5876e4c0.
extern "C" __declspec(naked) void FUN_5876e4c0() {
    __asm {
        // 0x5876E4C0: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876E4C4: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876E4C8: push esi
        __asm _emit 0x56
        // 0x5876E4C9: push eax
        __asm _emit 0x50
        // 0x5876E4CA: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876E4CE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876E4D0: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5876E4D4: push ecx
        __asm _emit 0x51
        // 0x5876E4D5: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876E4D9: push edx
        __asm _emit 0x52
        // 0x5876E4DA: push eax
        __asm _emit 0x50
        // 0x5876E4DB: push ecx
        __asm _emit 0x51
        // 0x5876E4DC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876E4DE: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x5876E4E3: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5876E4E7: mov dword ptr [esi], 0x58995bcc
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xCC
        __asm _emit 0x5B
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876E4ED: mov dword ptr [esi + 0x58], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x58
        // 0x5876E4F0: mov dword ptr [esi + 0x60], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876E4F7: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5876E4F9: pop esi
        __asm _emit 0x5E
        // 0x5876E4FA: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
