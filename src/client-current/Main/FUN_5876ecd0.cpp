// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876ECD0 .. +0x88 bytes.
// Source symbol alias: FUN_5876ecd0.
extern "C" __declspec(naked) void FUN_5876ecd0() {
    __asm {
        // 0x5876ECD0: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876ECD4: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876ECD8: push esi
        __asm _emit 0x56
        // 0x5876ECD9: push eax
        __asm _emit 0x50
        // 0x5876ECDA: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876ECDE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876ECE0: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5876ECE4: push ecx
        __asm _emit 0x51
        // 0x5876ECE5: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876ECE9: push edx
        __asm _emit 0x52
        // 0x5876ECEA: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876ECEE: push eax
        __asm _emit 0x50
        // 0x5876ECEF: push ecx
        __asm _emit 0x51
        // 0x5876ECF0: push edx
        __asm _emit 0x52
        // 0x5876ECF1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876ECF3: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x44
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876ECF8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876ECFA: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5876ECFD: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5876ED00: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5876ED03: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5876ED06: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5876ED09: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5876ED0C: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5876ED0F: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876ED12: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5876ED15: mov byte ptr [esi + 0x78], al
        __asm _emit 0x88
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5876ED18: mov byte ptr [esi + 0x79], al
        __asm _emit 0x88
        __asm _emit 0x46
        __asm _emit 0x79
        // 0x5876ED1B: mov byte ptr [esi + 0x7a], al
        __asm _emit 0x88
        __asm _emit 0x46
        __asm _emit 0x7A
        // 0x5876ED1E: mov dword ptr [esi], 0x58995c20
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x20
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876ED24: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876ED29: mov dword ptr [esi + 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5876ED2C: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5876ED31: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5876ED35: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5876ED3A: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5876ED3E: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876ED43: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5876ED46: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876ED4B: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5876ED4E: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5876ED52: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5876ED54: pop esi
        __asm _emit 0x5E
        // 0x5876ED55: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
