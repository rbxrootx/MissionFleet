// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876BE10 .. +0xC4 bytes.
// Source symbol alias: FUN_5876be10.
extern "C" __declspec(naked) void FUN_5876be10() {
    __asm {
        // 0x5876BE10: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876BE14: push ebx
        __asm _emit 0x53
        // 0x5876BE15: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876BE19: push ebp
        __asm _emit 0x55
        // 0x5876BE1A: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876BE1E: push esi
        __asm _emit 0x56
        // 0x5876BE1F: push edi
        __asm _emit 0x57
        // 0x5876BE20: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876BE24: push eax
        __asm _emit 0x50
        // 0x5876BE25: push ebx
        __asm _emit 0x53
        // 0x5876BE26: push ebp
        __asm _emit 0x55
        // 0x5876BE27: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876BE29: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5876BE2D: push edi
        __asm _emit 0x57
        // 0x5876BE2E: push ecx
        __asm _emit 0x51
        // 0x5876BE2F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876BE31: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x8B
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x5876BE36: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5876BE38: mov dword ptr [esi], 0x58995afc
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xFC
        __asm _emit 0x5A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876BE3E: mov dword ptr [esi + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x04
        // 0x5876BE41: mov dword ptr [esi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x5876BE44: mov dword ptr [esi + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5876BE47: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5876BE4A: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x5876BE4C: je 0x5876be75
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5876BE4E: mov edx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x5876BE51: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5876BE54: mov eax, dword ptr [edi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x1C
        // 0x5876BE57: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5876BE5A: mov edx, dword ptr [edi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x5876BE5D: lea eax, [edi + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x5876BE60: mov dword ptr [esi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x5876BE63: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5876BE66: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x5876BE69: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876BE6C: mov dword ptr [esi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x5876BE6F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5876BE72: mov dword ptr [esi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x5876BE75: mov dword ptr [esi + 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5876BE78: mov dword ptr [esi + 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5876BE7B: mov dword ptr [esi + 0x68], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5876BE7E: mov dword ptr [esi + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5876BE81: mov dword ptr [esi + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5876BE84: mov dword ptr [esi + 0x7c], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x7C
        // 0x5876BE87: mov dword ptr [esi + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x5876BE8A: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x0D
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x5876BE8F: cdq
        __asm _emit 0x99
        // 0x5876BE90: mov ecx, 0x168
        __asm _emit 0xB9
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BE95: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5876BE97: mov eax, 0xb4
        __asm _emit 0xB8
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BE9C: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5876BE9E: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5876BEA1: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x0D
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x5876BEA6: cdq
        __asm _emit 0x99
        // 0x5876BEA7: mov ecx, 0x168
        __asm _emit 0xB9
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BEAC: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5876BEAE: mov eax, 0xb4
        __asm _emit 0xB8
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BEB3: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5876BEB5: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5876BEB8: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x0D
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x5876BEBD: cdq
        __asm _emit 0x99
        // 0x5876BEBE: mov ecx, 0x96
        __asm _emit 0xB9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BEC3: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5876BEC5: pop edi
        __asm _emit 0x5F
        // 0x5876BEC6: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5876BEC8: add edx, 0x50
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x50
        // 0x5876BECB: mov dword ptr [esi + 0x6c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5876BECE: pop esi
        __asm _emit 0x5E
        // 0x5876BECF: pop ebp
        __asm _emit 0x5D
        // 0x5876BED0: pop ebx
        __asm _emit 0x5B
        // 0x5876BED1: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
