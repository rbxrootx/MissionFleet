// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587CECC0 .. +0x172 bytes.
// Source symbol alias: FUN_587cecc0.
extern "C" __declspec(naked) void FUN_587cecc0() {
    __asm {
        // 0x587CECC0: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x587CECC3: push ebx
        __asm _emit 0x53
        // 0x587CECC4: push ebp
        __asm _emit 0x55
        // 0x587CECC5: push esi
        __asm _emit 0x56
        // 0x587CECC6: push edi
        __asm _emit 0x57
        // 0x587CECC7: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587CECCB: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587CECCD: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587CECCF: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CECD3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CECD5: je 0x587cece6
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587CECD7: push eax
        __asm _emit 0x50
        // 0x587CECD8: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xDF
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CECDD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CECE0: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CECE6: mov ebx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587CECEA: mov esi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587CECEE: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587CECF0: imul eax, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC6
        // 0x587CECF3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587CECF5: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CECFA: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x587CECFC: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x587CECFF: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x587CED01: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x587CED03: push ecx
        __asm _emit 0x51
        // 0x587CED04: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x28
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CED09: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x587CED0B: mov ecx, dword ptr [ebp + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CED11: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587CED13: cdq
        __asm _emit 0x99
        // 0x587CED14: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587CED16: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CED19: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CED1D: mov eax, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CED23: cdq
        __asm _emit 0x99
        // 0x587CED24: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x587CED26: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CED2A: mov eax, dword ptr [ebp + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CED30: cdq
        __asm _emit 0x99
        // 0x587CED31: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587CED33: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587CED37: mov eax, dword ptr [ebp + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CED3D: cdq
        __asm _emit 0x99
        // 0x587CED3E: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x587CED40: cmp ecx, dword ptr [ebp + 0xa8]
        __asm _emit 0x3B
        __asm _emit 0x8D
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CED46: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CED4A: jge 0x587ced56
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x587CED4C: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CED50: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587CED54: jmp 0x587ced5e
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587CED56: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587CED5A: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587CED5E: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587CED62: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587CED65: cdq
        __asm _emit 0x99
        // 0x587CED66: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587CED68: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CED6A: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587CED6E: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587CED70: cdq
        __asm _emit 0x99
        // 0x587CED71: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587CED73: sar ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xF9
        // 0x587CED75: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587CED77: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587CED79: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x587CED7C: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x587CED7F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CED81: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587CED83: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x587CED85: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CED89: jle 0x587cee28
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CED8F: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587CED93: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587CED97: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CED9B: jmp 0x587ceda0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587CED9D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587CEDA0: mov edx, dword ptr [ebp + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEDA6: add edx, dword ptr [esp + 0x34]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587CEDAA: mov ebx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x1F
        // 0x587CEDAC: mov dword ptr [ecx + ebx], edx
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x19
        // 0x587CEDAF: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587CEDB3: sub edx, dword ptr [ebp + 0x84]
        __asm _emit 0x2B
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEDB9: mov ebx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x1F
        // 0x587CEDBB: mov dword ptr [ebx + ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x0B
        __asm _emit 0x04
        // 0x587CEDBF: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587CEDC1: jle 0x587cee04
        __asm _emit 0x7E
        __asm _emit 0x41
        // 0x587CEDC3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CEDC5: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587CEDC7: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587CEDC9: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CEDCD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587CEDD0: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x587CEDD2: mov ebp, dword ptr [ecx + esi]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x31
        // 0x587CEDD5: add ebp, ebx
        __asm _emit 0x03
        __asm _emit 0xEB
        // 0x587CEDD7: add ebx, dword ptr [esp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CEDDB: mov dword ptr [edx + esi], ebp
        __asm _emit 0x89
        __asm _emit 0x2C
        __asm _emit 0x32
        // 0x587CEDDE: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x587CEDE0: mov ebp, dword ptr [ecx + esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x31
        __asm _emit 0x04
        // 0x587CEDE4: sub ebp, eax
        __asm _emit 0x2B
        __asm _emit 0xE8
        // 0x587CEDE6: add eax, dword ptr [esp + 0x24]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CEDEA: mov dword ptr [edx + esi + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x32
        __asm _emit 0x04
        // 0x587CEDEE: add edx, 8
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x08
        // 0x587CEDF1: sub dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x587CEDF6: jne 0x587cedd0
        __asm _emit 0x75
        __asm _emit 0xD8
        // 0x587CEDF8: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CEDFC: mov esi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587CEE00: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CEE04: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587CEE08: add dword ptr [esp + 0x34], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587CEE0C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CEE10: add dword ptr [esp + 0x38], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587CEE14: lea edx, [esi*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEE1B: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587CEE1D: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x587CEE22: jne 0x587ceda0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CEE28: pop edi
        __asm _emit 0x5F
        // 0x587CEE29: pop esi
        __asm _emit 0x5E
        // 0x587CEE2A: pop ebp
        __asm _emit 0x5D
        // 0x587CEE2B: pop ebx
        __asm _emit 0x5B
        // 0x587CEE2C: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x587CEE2F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
