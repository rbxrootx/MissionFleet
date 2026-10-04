// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587CFCE0 .. +0x16C bytes.
// Source symbol alias: FUN_587cfce0.
extern "C" __declspec(naked) void FUN_587cfce0() {
    __asm {
        // 0x587CFCE0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587CFCE2: push 0x58981adb
        __asm _emit 0x68
        __asm _emit 0xDB
        __asm _emit 0x1A
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CFCE7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFCED: push eax
        __asm _emit 0x50
        // 0x587CFCEE: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587CFCF1: push ebx
        __asm _emit 0x53
        // 0x587CFCF2: push ebp
        __asm _emit 0x55
        // 0x587CFCF3: push esi
        __asm _emit 0x56
        // 0x587CFCF4: push edi
        __asm _emit 0x57
        // 0x587CFCF5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CFCFA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587CFCFC: push eax
        __asm _emit 0x50
        // 0x587CFCFD: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CFD01: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFD07: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587CFD09: mov dword ptr [edi + 0x9e8], 0x30
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFD13: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFD1B: lea esi, [edi + 0x810]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFD21: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xCF
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CFD26: cdq
        __asm _emit 0x99
        // 0x587CFD27: mov ecx, 6
        __asm _emit 0xB9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFD2C: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587CFD2E: push 0x84
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFD33: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x587CFD35: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0xCF
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CFD3A: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587CFD3C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CFD3F: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CFD43: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFD4B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587CFD4D: je 0x587cfdba
        __asm _emit 0x74
        __asm _emit 0x6B
        // 0x587CFD4F: mov eax, dword ptr [0x58a246ac]
        __asm _emit 0xA1
        __asm _emit 0xAC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CFD54: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFD5A: jle 0x587cfd74
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x587CFD5C: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587CFD5E: jl 0x587cfd74
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x587CFD60: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFD67: je 0x587cfd74
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587CFD69: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFD6F: mov ebx, dword ptr [edx + ebx*4]
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x9A
        // 0x587CFD72: jmp 0x587cfd76
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CFD74: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587CFD76: mov eax, 0x898
        __asm _emit 0xB8
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFD7B: add ax, word ptr [edi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x587CFD7F: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x587CFD82: push ecx
        __asm _emit 0x51
        // 0x587CFD83: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xCE
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CFD88: cdq
        __asm _emit 0x99
        // 0x587CFD89: mov ecx, 0x7d0
        __asm _emit 0xB9
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFD8E: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587CFD90: mov eax, 0x300
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFD95: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587CFD97: push eax
        __asm _emit 0x50
        // 0x587CFD98: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xCE
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CFD9D: cdq
        __asm _emit 0x99
        // 0x587CFD9E: mov ecx, 0xfa0
        __asm _emit 0xB9
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFDA3: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587CFDA5: mov eax, 0x834
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFDAA: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587CFDAC: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587CFDAE: push eax
        __asm _emit 0x50
        // 0x587CFDAF: push ebx
        __asm _emit 0x53
        // 0x587CFDB0: push edi
        __asm _emit 0x57
        // 0x587CFDB1: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x587CFDB3: call 0x5876e890
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xEA
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587CFDB8: jmp 0x587cfdbc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CFDBA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CFDBC: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFDC1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CFDC3: mov dword ptr [esp + 0x28], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CFDCB: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x587CFDCD: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x2F
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CFDD2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587CFDD4: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFDD9: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587CFDDD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587CFDDF: mov edx, 0xbfff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFDE4: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CFDE8: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587CFDEA: mov dword ptr [eax + 0x78], 0x101
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFDF1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587CFDF3: mov ecx, 0xdfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFDF8: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587CFDFC: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CFE00: inc eax
        __asm _emit 0x40
        // 0x587CFE01: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587CFE04: cmp eax, dword ptr [edi + 0x9e8]
        __asm _emit 0x3B
        __asm _emit 0x87
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFE0A: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CFE0E: jl 0x587cfd21
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x0D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CFE14: mov edx, dword ptr [edi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFE1A: add edx, 0xd2
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFE20: mov dword ptr [edi + 0x70], 0x64
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x70
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFE27: mov dword ptr [edi + 0x74], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x74
        // 0x587CFE2A: mov dword ptr [edi + 0x78], 0x384
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x78
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFE31: mov dword ptr [edi + 0x7c], 0x168
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x7C
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFE38: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CFE3C: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFE43: pop ecx
        __asm _emit 0x59
        // 0x587CFE44: pop edi
        __asm _emit 0x5F
        // 0x587CFE45: pop esi
        __asm _emit 0x5E
        // 0x587CFE46: pop ebp
        __asm _emit 0x5D
        // 0x587CFE47: pop ebx
        __asm _emit 0x5B
        // 0x587CFE48: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587CFE4B: ret
        __asm _emit 0xC3
    }
}
