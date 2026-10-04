// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B6DD0 .. +0xC9 bytes.
// Source symbol alias: FUN_587b6dd0.
extern "C" __declspec(naked) void FUN_587b6dd0() {
    __asm {
        // 0x587B6DD0: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B6DD4: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B6DD8: push ebx
        __asm _emit 0x53
        // 0x587B6DD9: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B6DDD: push esi
        __asm _emit 0x56
        // 0x587B6DDE: push edi
        __asm _emit 0x57
        // 0x587B6DDF: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B6DE3: push eax
        __asm _emit 0x50
        // 0x587B6DE4: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B6DE8: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B6DEA: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B6DEE: push ecx
        __asm _emit 0x51
        // 0x587B6DEF: push edx
        __asm _emit 0x52
        // 0x587B6DF0: push edi
        __asm _emit 0x57
        // 0x587B6DF1: push ebx
        __asm _emit 0x53
        // 0x587B6DF2: push eax
        __asm _emit 0x50
        // 0x587B6DF3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B6DF5: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xC3
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B6DFA: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587B6DFE: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B6E04: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B6E09: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B6E0B: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x587B6E0E: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x587B6E11: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6E18: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x587B6E1B: mov dword ptr [esi], 0x5899a0e8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B6E21: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587B6E23: jne 0x587b6e33
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587B6E25: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x587B6E28: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x587B6E2B: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x587B6E2E: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x587B6E31: jmp 0x587b6e4a
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x587B6E33: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587B6E35: mov dword ptr [esi + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x587B6E38: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587B6E3B: mov dword ptr [esi + 0x68], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x587B6E3E: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587B6E41: mov dword ptr [esi + 0x6c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x587B6E44: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x587B6E47: mov dword ptr [esi + 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x587B6E4A: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587B6E4E: mov cl, byte ptr [esp + 0x30]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B6E52: mov dword ptr [esi + 0x74], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x587B6E55: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x587B6E59: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x587B6E5C: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x587B6E5F: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6E65: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6E6B: mov byte ptr [esi + 0x60], al
        __asm _emit 0x88
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587B6E6E: mov byte ptr [esi + 0x61], cl
        __asm _emit 0x88
        __asm _emit 0x4E
        __asm _emit 0x61
        // 0x587B6E71: mov eax, 0xe5ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6E76: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x587B6E79: mov dword ptr [esi + 0x8c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6E7F: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6E84: mov dword ptr [esi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6E8A: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x587B6E8D: pop edi
        __asm _emit 0x5F
        // 0x587B6E8E: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x587B6E92: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587B6E94: pop esi
        __asm _emit 0x5E
        // 0x587B6E95: pop ebx
        __asm _emit 0x5B
        // 0x587B6E96: ret 0x24
        __asm _emit 0xC2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
