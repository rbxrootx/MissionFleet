// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5886DE19 .. +0x1B9 bytes.
extern "C" __declspec(naked) void FUN_5886de19() {
    __asm {
        // 0x5886DE19: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5886DE1B: push ebp
        __asm _emit 0x55
        // 0x5886DE1C: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5886DE1E: sub esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x30
        // 0x5886DE21: mov eax, dword ptr [0x58906040]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5886DE26: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x5886DE28: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5886DE2B: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5886DE2E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5886DE30: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x5886DE33: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5886DE36: push ebx
        __asm _emit 0x53
        // 0x5886DE37: mov ebx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x18
        // 0x5886DE3A: push esi
        __asm _emit 0x56
        // 0x5886DE3B: push edi
        __asm _emit 0x57
        // 0x5886DE3C: mov edi, 0x58969990
        __asm _emit 0xBF
        __asm _emit 0x90
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5886DE41: mov dword ptr [ebp - 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xD8
        // 0x5886DE44: cmovne edi, eax
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5886DE47: mov dword ptr [ebp - 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xDC
        // 0x5886DE4A: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5886DE4C: mov dword ptr [ebp - 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xD0
        // 0x5886DE4F: inc esi
        __asm _emit 0x46
        // 0x5886DE50: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5886DE52: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5886DE54: cmovne eax, dword ptr [ebp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5886DE58: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5886DE5B: mov eax, 0x58895250
        __asm _emit 0xB8
        __asm _emit 0x50
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5886DE60: cmovne eax, edx
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xC2
        // 0x5886DE63: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5886DE65: cmp dword ptr [ebp - 0x28], edx
        __asm _emit 0x39
        __asm _emit 0x55
        __asm _emit 0xD8
        // 0x5886DE68: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5886DE6B: cmovne edx, ecx
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xD1
        // 0x5886DE6E: cmp dword ptr [ebp - 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x5886DE72: mov dword ptr [ebp - 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xD4
        // 0x5886DE75: jne 0x5886de7f
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5886DE77: push -2
        __asm _emit 0x6A
        __asm _emit 0xFE
        // 0x5886DE79: pop eax
        __asm _emit 0x58
        // 0x5886DE7A: jmp 0x5886dfc3
        __asm _emit 0xE9
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DE7F: cmp word ptr [edi + 6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5886DE84: jne 0x5886dedb
        __asm _emit 0x75
        __asm _emit 0x55
        // 0x5886DE86: push eax
        __asm _emit 0x50
        // 0x5886DE87: call 0x5886ddd8
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5886DE8C: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5886DE8E: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5886DE91: pop ecx
        __asm _emit 0x59
        // 0x5886DE92: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x5886DE94: inc eax
        __asm _emit 0x40
        // 0x5886DE95: mov byte ptr [ebp - 0x11], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xEF
        // 0x5886DE98: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5886DE9B: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5886DE9D: je 0x5886dec8
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5886DE9F: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x5886DEA1: je 0x5886dec8
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x5886DEA3: cmp edx, 2
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5886DEA6: jl 0x5886dec2
        __asm _emit 0x7C
        __asm _emit 0x1A
        // 0x5886DEA8: cmp edx, 4
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5886DEAB: jg 0x5886dec2
        __asm _emit 0x7F
        __asm _emit 0x15
        // 0x5886DEAD: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x5886DEAF: movzx eax, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x5886DEB2: mov bl, dl
        __asm _emit 0x8A
        __asm _emit 0xDA
        // 0x5886DEB4: pop ecx
        __asm _emit 0x59
        // 0x5886DEB5: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5886DEB7: movzx eax, byte ptr [ebp - 0x11]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x45
        __asm _emit 0xEF
        // 0x5886DEBB: shl esi, cl
        __asm _emit 0xD3
        __asm _emit 0xE6
        // 0x5886DEBD: dec esi
        __asm _emit 0x4E
        // 0x5886DEBE: and esi, eax
        __asm _emit 0x23
        __asm _emit 0xF0
        // 0x5886DEC0: jmp 0x5886deff
        __asm _emit 0xEB
        __asm _emit 0x3D
        // 0x5886DEC2: push ebx
        __asm _emit 0x53
        // 0x5886DEC3: jmp 0x5886dfbb
        __asm _emit 0xE9
        __asm _emit 0xF3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DEC8: mov ebx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0xD4
        // 0x5886DECB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5886DECD: je 0x5886ded4
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5886DECF: movzx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC1
        // 0x5886DED2: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x5886DED4: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5886DED6: jmp 0x5886dfc3
        __asm _emit 0xE9
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DEDB: mov dl, byte ptr [edi + 4]
        __asm _emit 0x8A
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x5886DEDE: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x5886DEE0: mov bl, byte ptr [edi + 6]
        __asm _emit 0x8A
        __asm _emit 0x5F
        __asm _emit 0x06
        // 0x5886DEE3: lea eax, [edx - 2]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0xFE
        // 0x5886DEE6: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x5886DEE8: ja 0x5886dfb8
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DEEE: cmp bl, 1
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x01
        // 0x5886DEF1: jb 0x5886dfb8
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DEF7: cmp bl, dl
        __asm _emit 0x3A
        __asm _emit 0xDA
        // 0x5886DEF9: jae 0x5886dfb8
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DEFF: movzx ecx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xCB
        // 0x5886DF02: cmp ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x3B
        __asm _emit 0x4D
        __asm _emit 0xE8
        // 0x5886DF05: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5886DF07: cmovae eax, dword ptr [ebp - 0x18]
        __asm _emit 0x0F
        __asm _emit 0x43
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5886DF0B: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5886DF0E: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5886DF11: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5886DF13: sub edi, dword ptr [ebp - 0x28]
        __asm _emit 0x2B
        __asm _emit 0x7D
        __asm _emit 0xD8
        // 0x5886DF16: cmp edi, dword ptr [ebp - 0x20]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0xE0
        // 0x5886DF19: mov dword ptr [ebp - 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xE8
        // 0x5886DF1C: mov edi, dword ptr [ebp - 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xD0
        // 0x5886DF1F: jae 0x5886df4c
        __asm _emit 0x73
        __asm _emit 0x2B
        // 0x5886DF21: mov bh, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x38
        // 0x5886DF23: inc eax
        __asm _emit 0x40
        // 0x5886DF24: inc dword ptr [ebp - 0x18]
        __asm _emit 0xFF
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5886DF27: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5886DF2A: mov al, bh
        __asm _emit 0x8A
        __asm _emit 0xC7
        // 0x5886DF2C: and al, 0xc0
        __asm _emit 0x24
        __asm _emit 0xC0
        // 0x5886DF2E: cmp al, 0x80
        __asm _emit 0x3C
        __asm _emit 0x80
        // 0x5886DF30: jne 0x5886dfb8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DF36: movzx eax, bh
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC7
        // 0x5886DF39: and eax, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x3F
        // 0x5886DF3C: shl esi, 6
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x06
        // 0x5886DF3F: or esi, eax
        __asm _emit 0x0B
        __asm _emit 0xF0
        // 0x5886DF41: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5886DF44: cmp eax, dword ptr [ebp - 0x20]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5886DF47: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5886DF4A: jb 0x5886df21
        __asm _emit 0x72
        __asm _emit 0xD5
        // 0x5886DF4C: cmp dword ptr [ebp - 0x20], ecx
        __asm _emit 0x39
        __asm _emit 0x4D
        __asm _emit 0xE0
        // 0x5886DF4F: jae 0x5886df69
        __asm _emit 0x73
        __asm _emit 0x18
        // 0x5886DF51: sub bl, byte ptr [ebp - 0x20]
        __asm _emit 0x2A
        __asm _emit 0x5D
        __asm _emit 0xE0
        // 0x5886DF54: movzx eax, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x5886DF57: mov word ptr [edi + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5886DF5B: movzx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC3
        // 0x5886DF5E: mov dword ptr [edi], esi
        __asm _emit 0x89
        __asm _emit 0x37
        // 0x5886DF60: mov word ptr [edi + 6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x06
        // 0x5886DF64: jmp 0x5886de77
        __asm _emit 0xE9
        __asm _emit 0x0E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5886DF69: cmp esi, 0xd800
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DF6F: jb 0x5886df79
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x5886DF71: cmp esi, 0xdfff
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DF77: jbe 0x5886dfb8
        __asm _emit 0x76
        __asm _emit 0x3F
        // 0x5886DF79: cmp esi, 0x10ffff
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5886DF7F: ja 0x5886dfb8
        __asm _emit 0x77
        __asm _emit 0x37
        // 0x5886DF81: movzx eax, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x5886DF84: mov dword ptr [ebp - 0x10], 0x80
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xF0
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DF8B: mov dword ptr [ebp - 0xc], 0x800
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DF92: mov dword ptr [ebp - 8], 0x10000
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5886DF99: cmp esi, dword ptr [ebp + eax*4 - 0x18]
        __asm _emit 0x3B
        __asm _emit 0x74
        __asm _emit 0x85
        __asm _emit 0xE8
        // 0x5886DF9D: jb 0x5886dfb8
        __asm _emit 0x72
        __asm _emit 0x19
        // 0x5886DF9F: mov ebx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0xD4
        // 0x5886DFA2: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5886DFA4: je 0x5886dfa8
        __asm _emit 0x74
        __asm _emit 0x02
        // 0x5886DFA6: mov dword ptr [ebx], esi
        __asm _emit 0x89
        __asm _emit 0x33
        // 0x5886DFA8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886DFAA: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5886DFAC: push edi
        __asm _emit 0x57
        // 0x5886DFAD: cmove ecx, eax
        __asm _emit 0x0F
        __asm _emit 0x44
        __asm _emit 0xC8
        // 0x5886DFB0: push ecx
        __asm _emit 0x51
        // 0x5886DFB1: call 0x5887b1c5
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DFB6: jmp 0x5886dfc1
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5886DFB8: push dword ptr [ebp - 0x24]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xDC
        // 0x5886DFBB: push edi
        __asm _emit 0x57
        // 0x5886DFBC: call 0x5887b1d9
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DFC1: pop ecx
        __asm _emit 0x59
        // 0x5886DFC2: pop ecx
        __asm _emit 0x59
        // 0x5886DFC3: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5886DFC6: pop edi
        __asm _emit 0x5F
        // 0x5886DFC7: pop esi
        __asm _emit 0x5E
        // 0x5886DFC8: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xCD
        // 0x5886DFCA: pop ebx
        __asm _emit 0x5B
        // 0x5886DFCB: call 0x58831050
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x30
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x5886DFD0: leave
        __asm _emit 0xC9
        // 0x5886DFD1: ret
        __asm _emit 0xC3
    }
}
