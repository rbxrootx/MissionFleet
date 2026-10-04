// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5886B340 .. +0x78 bytes.
// Source symbol alias: FUN_5886b340.
extern "C" __declspec(naked) void FUN_5886b340() {
    __asm {
        // 0x5886B340: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5886B344: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5886B348: push ebx
        __asm _emit 0x53
        // 0x5886B349: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5886B34D: push esi
        __asm _emit 0x56
        // 0x5886B34E: push edi
        __asm _emit 0x57
        // 0x5886B34F: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5886B353: push eax
        __asm _emit 0x50
        // 0x5886B354: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5886B358: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5886B35A: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5886B35E: push ecx
        __asm _emit 0x51
        // 0x5886B35F: push edx
        __asm _emit 0x52
        // 0x5886B360: push edi
        __asm _emit 0x57
        // 0x5886B361: push ebx
        __asm _emit 0x53
        // 0x5886B362: push eax
        __asm _emit 0x50
        // 0x5886B363: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5886B365: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x7E
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886B36A: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5886B370: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5886B375: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886B37A: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5886B37E: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5886B382: mov eax, 0xe5ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886B387: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5886B38A: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5886B38D: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886B392: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x5886B395: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886B39C: mov dword ptr [esi + 0x5c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x5C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886B3A3: mov dword ptr [esi], 0x5899edb8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xB8
        __asm _emit 0xED
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5886B3A9: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x5886B3AC: pop edi
        __asm _emit 0x5F
        // 0x5886B3AD: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5886B3B1: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5886B3B3: pop esi
        __asm _emit 0x5E
        // 0x5886B3B4: pop ebx
        __asm _emit 0x5B
        // 0x5886B3B5: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
