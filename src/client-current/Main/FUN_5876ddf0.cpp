// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876DDF0 .. +0x95 bytes.
// Source symbol alias: FUN_5876ddf0.
extern "C" __declspec(naked) void FUN_5876ddf0() {
    __asm {
        // 0x5876DDF0: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876DDF4: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876DDF8: push esi
        __asm _emit 0x56
        // 0x5876DDF9: push eax
        __asm _emit 0x50
        // 0x5876DDFA: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876DDFE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876DE00: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5876DE04: push ecx
        __asm _emit 0x51
        // 0x5876DE05: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876DE09: push edx
        __asm _emit 0x52
        // 0x5876DE0A: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876DE0E: push eax
        __asm _emit 0x50
        // 0x5876DE0F: push ecx
        __asm _emit 0x51
        // 0x5876DE10: push edx
        __asm _emit 0x52
        // 0x5876DE11: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876DE13: call 0x5876e890
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DE18: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876DE1C: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5876DE20: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876DE22: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DE28: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DE2E: mov byte ptr [esi + 0x94], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DE34: mov byte ptr [esi + 0x95], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DE3A: mov byte ptr [esi + 0x96], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DE40: mov byte ptr [esi + 0x97], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DE46: mov al, byte ptr [esp + 0x20]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5876DE4A: mov byte ptr [esi + 0x98], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DE50: mov dword ptr [esi + 0x88], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DE56: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876DE5A: mov dword ptr [esi + 0x90], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DE60: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5876DE64: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DE69: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5876DE6D: mov dword ptr [esi], 0x58995bb0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xB0
        __asm _emit 0x5B
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876DE73: mov dword ptr [esi + 0x9c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DE79: mov dword ptr [esi + 0xa0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876DE7F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5876DE81: pop esi
        __asm _emit 0x5E
        // 0x5876DE82: ret 0x2c
        __asm _emit 0xC2
        __asm _emit 0x2C
        __asm _emit 0x00
    }
}
