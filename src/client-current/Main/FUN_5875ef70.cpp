// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875EF70 .. +0x7D bytes.
// Source symbol alias: FUN_5875ef70.
extern "C" __declspec(naked) void FUN_5875ef70() {
    __asm {
        // 0x5875EF70: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875EF74: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5875EF78: push ebx
        __asm _emit 0x53
        // 0x5875EF79: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875EF7D: push esi
        __asm _emit 0x56
        // 0x5875EF7E: push edi
        __asm _emit 0x57
        // 0x5875EF7F: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875EF83: push eax
        __asm _emit 0x50
        // 0x5875EF84: push edi
        __asm _emit 0x57
        // 0x5875EF85: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875EF87: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875EF8B: push ebx
        __asm _emit 0x53
        // 0x5875EF8C: push ecx
        __asm _emit 0x51
        // 0x5875EF8D: push edx
        __asm _emit 0x52
        // 0x5875EF8E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875EF90: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x2C
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875EF95: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875EF99: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875EF9D: mov dword ptr [esi + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x5875EFA0: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875EFA4: mov dword ptr [esi + 0x68], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x5875EFA7: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875EFAB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5875EFAD: inc edx
        __asm _emit 0x42
        // 0x5875EFAE: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5875EFB1: test al, 0x10
        __asm _emit 0xA8
        __asm _emit 0x10
        // 0x5875EFB3: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5875EFB7: mov dword ptr [esi], 0x5898da38
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x38
        __asm _emit 0xDA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875EFBD: mov dword ptr [esi + 0x74], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5875EFC0: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x5875EFC3: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x5875EFC6: mov dword ptr [esi + 0x70], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x5875EFC9: mov dword ptr [esi + 0x7c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5875EFCC: mov dword ptr [esi + 0x80], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875EFD2: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5875EFD5: je 0x5875efe2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5875EFD7: pop edi
        __asm _emit 0x5F
        // 0x5875EFD8: mov dword ptr [esi + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x5875EFDB: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5875EFDD: pop esi
        __asm _emit 0x5E
        // 0x5875EFDE: pop ebx
        __asm _emit 0x5B
        // 0x5875EFDF: ret 0x28
        __asm _emit 0xC2
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x5875EFE2: mov dword ptr [esi + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x5875EFE5: pop edi
        __asm _emit 0x5F
        // 0x5875EFE6: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5875EFE8: pop esi
        __asm _emit 0x5E
        // 0x5875EFE9: pop ebx
        __asm _emit 0x5B
        // 0x5875EFEA: ret 0x28
        __asm _emit 0xC2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
