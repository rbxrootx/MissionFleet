// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875F4B0 .. +0x42 bytes.
// Source symbol alias: FUN_5875f4b0.
extern "C" __declspec(naked) void FUN_5875f4b0() {
    __asm {
        // 0x5875F4B0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875F4B4: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5875F4B8: push esi
        __asm _emit 0x56
        // 0x5875F4B9: push eax
        __asm _emit 0x50
        // 0x5875F4BA: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875F4BE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875F4C0: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875F4C4: push ecx
        __asm _emit 0x51
        // 0x5875F4C5: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875F4C9: push edx
        __asm _emit 0x52
        // 0x5875F4CA: push eax
        __asm _emit 0x50
        // 0x5875F4CB: push ecx
        __asm _emit 0x51
        // 0x5875F4CC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875F4CE: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x7C
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875F4D3: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875F4D7: xor dword ptr [esi + 0x60], eax
        __asm _emit 0x31
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5875F4DA: xor dword ptr [esi + 0x50], eax
        __asm _emit 0x31
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5875F4DD: xor dword ptr [esi + 0x64], eax
        __asm _emit 0x31
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5875F4E0: mov dword ptr [esi + 0xfc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F4E6: mov dword ptr [esi], 0x5898da70
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x70
        __asm _emit 0xDA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875F4EC: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5875F4EE: pop esi
        __asm _emit 0x5E
        // 0x5875F4EF: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
