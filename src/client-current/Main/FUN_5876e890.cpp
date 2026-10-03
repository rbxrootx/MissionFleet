// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876E890 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_5876e890() {
    __asm {
        // 0x5876E890: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876E894: push ebx
        __asm _emit 0x53
        // 0x5876E895: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876E899: push ebp
        __asm _emit 0x55
        // 0x5876E89A: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876E89E: push esi
        __asm _emit 0x56
        // 0x5876E89F: push edi
        __asm _emit 0x57
        // 0x5876E8A0: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5876E8A4: push eax
        __asm _emit 0x50
        // 0x5876E8A5: push ebx
        __asm _emit 0x53
        // 0x5876E8A6: push ebp
        __asm _emit 0x55
        // 0x5876E8A7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876E8A9: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876E8AD: push edi
        __asm _emit 0x57
        // 0x5876E8AE: push ecx
        __asm _emit 0x51
        // 0x5876E8AF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876E8B1: call 0x587b69e0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5876E8B6: mov dx, word ptr [esp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5876E8BB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5876E8BD: mov dword ptr [esi], 0x58995c04
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876E8C3: mov dword ptr [esi + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x04
        // 0x5876E8C6: mov dword ptr [esi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x5876E8C9: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x5876E8CD: mov dword ptr [esi + 0x68], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x68
        // 0x5876E8D0: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x5876E8D3: mov dword ptr [esi + 0x7c], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876E8DA: mov dword ptr [esi + 0x78], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5876E8DD: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x5876E8E0: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x5876E8E2: je 0x5876e90a
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5876E8E4: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x5876E8E7: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5876E8EA: mov edx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x5876E8ED: lea eax, [edi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x5876E8F0: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x5876E8F3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5876E8F5: mov dword ptr [esi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x5876E8F8: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5876E8FB: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x5876E8FE: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876E901: mov dword ptr [esi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x5876E904: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5876E907: mov dword ptr [esi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x5876E90A: mov dword ptr [esi + 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5876E90D: mov dword ptr [esi + 0x74], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5876E910: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5876E915: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876E919: pop edi
        __asm _emit 0x5F
        // 0x5876E91A: mov dword ptr [esi + 0x80], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876E920: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5876E922: pop esi
        __asm _emit 0x5E
        // 0x5876E923: pop ebp
        __asm _emit 0x5D
        // 0x5876E924: pop ebx
        __asm _emit 0x5B
        // 0x5876E925: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
