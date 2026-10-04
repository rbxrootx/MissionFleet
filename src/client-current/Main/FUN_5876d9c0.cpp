// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876D9C0 .. +0x74 bytes.
// Source symbol alias: FUN_5876d9c0.
extern "C" __declspec(naked) void FUN_5876d9c0() {
    __asm {
        // 0x5876D9C0: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876D9C4: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876D9C8: push esi
        __asm _emit 0x56
        // 0x5876D9C9: push eax
        __asm _emit 0x50
        // 0x5876D9CA: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876D9CE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876D9D0: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5876D9D4: push ecx
        __asm _emit 0x51
        // 0x5876D9D5: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876D9D9: push edx
        __asm _emit 0x52
        // 0x5876D9DA: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876D9DE: push eax
        __asm _emit 0x50
        // 0x5876D9DF: push ecx
        __asm _emit 0x51
        // 0x5876D9E0: push edx
        __asm _emit 0x52
        // 0x5876D9E1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876D9E3: call 0x5876e510
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D9E8: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876D9EC: mov dl, byte ptr [esp + 0x20]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5876D9F0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876D9F2: mov dword ptr [esi + 0x94], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D9F8: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D9FE: mov byte ptr [esi + 0x98], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DA04: mov byte ptr [esi + 0x99], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DA0A: mov byte ptr [esi + 0x9a], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DA10: mov byte ptr [esi + 0x9b], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DA16: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DA1B: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5876DA1F: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5876DA22: mov dword ptr [esi], 0x58995b94
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x94
        __asm _emit 0x5B
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876DA28: mov byte ptr [esi + 0x9c], dl
        __asm _emit 0x88
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DA2E: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5876DA30: pop esi
        __asm _emit 0x5E
        // 0x5876DA31: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
