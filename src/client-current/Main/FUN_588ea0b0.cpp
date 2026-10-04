// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EA0B0 .. +0x4D bytes.
// Source symbol alias: FUN_588ea0b0.
extern "C" __declspec(naked) void FUN_588ea0b0() {
    __asm {
        // 0x588EA0B0: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588EA0B4: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588EA0B8: push esi
        __asm _emit 0x56
        // 0x588EA0B9: push eax
        __asm _emit 0x50
        // 0x588EA0BA: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588EA0BE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588EA0C0: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588EA0C4: push ecx
        __asm _emit 0x51
        // 0x588EA0C5: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588EA0C9: push edx
        __asm _emit 0x52
        // 0x588EA0CA: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588EA0CE: push eax
        __asm _emit 0x50
        // 0x588EA0CF: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588EA0D3: push ecx
        __asm _emit 0x51
        // 0x588EA0D4: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588EA0D8: push edx
        __asm _emit 0x52
        // 0x588EA0D9: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588EA0DD: push eax
        __asm _emit 0x50
        // 0x588EA0DE: push ecx
        __asm _emit 0x51
        // 0x588EA0DF: push edx
        __asm _emit 0x52
        // 0x588EA0E0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588EA0E2: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xDE
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EA0E7: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EA0EB: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA0F1: mov dword ptr [esi], 0x589a1424
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EA0F7: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588EA0F9: pop esi
        __asm _emit 0x5E
        // 0x588EA0FA: ret 0x28
        __asm _emit 0xC2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
