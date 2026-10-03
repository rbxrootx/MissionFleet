// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58797AB0 .. +0x28C bytes.
extern "C" __declspec(naked) void FUN_58797ab0() {
    __asm {
        // 0x58797AB0: push esi
        __asm _emit 0x56
        // 0x58797AB1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58797AB3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58797AB7: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x58797AB9: je 0x58797d36
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797ABF: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58797AC3: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797AC8: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58797ACB: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797AD0: push edi
        __asm _emit 0x57
        // 0x58797AD1: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58797AD4: je 0x58797b5f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797ADA: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58797ADE: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58797AE1: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797AE6: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58797AE9: je 0x58797b5f
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x58797AEB: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58797AEF: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58797AF2: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797AF7: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58797AFA: jne 0x58797d19
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797B00: push ebx
        __asm _emit 0x53
        // 0x58797B01: lea edi, [esi + 0xdc]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797B07: mov ebx, 0x28
        __asm _emit 0xBB
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797B0C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58797B10: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58797B12: call 0x5875f310
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x77
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58797B17: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58797B1A: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58797B1D: jne 0x58797b10
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x58797B1F: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797B25: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58797B2A: cmp dword ptr [esi + 0x268], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797B30: pop ebx
        __asm _emit 0x5B
        // 0x58797B31: jne 0x58797d19
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797B37: mov ecx, dword ptr [esi + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797B3D: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58797B41: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x58797B45: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x58797B48: cmp dl, 5
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58797B4B: jne 0x58797d19
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797B51: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58797B53: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58797B56: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58797B58: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58797B5A: jmp 0x58797d19
        __asm _emit 0xE9
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797B5F: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58797B62: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58797B65: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58797B67: jne 0x58797b71
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58797B69: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58797B6C: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x58797B6F: je 0x58797bd6
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x58797B71: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58797B73: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58797B76: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58797B79: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x58797B7C: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x58797B7F: ja 0x58797ba6
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x58797B81: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x58797B84: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58797B87: ja 0x58797b9d
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x58797B89: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58797B8B: jge 0x58797b92
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x58797B8D: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x58797B90: jmp 0x58797bb1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x58797B92: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58797B94: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58797B96: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x58797B99: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58797B9B: jmp 0x58797bb1
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x58797B9D: cdq
        __asm _emit 0x99
        // 0x58797B9E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58797BA0: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58797BA2: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x58797BA4: jmp 0x58797bb1
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x58797BA6: cdq
        __asm _emit 0x99
        // 0x58797BA7: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x58797BAA: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58797BAC: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58797BAE: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x58797BB1: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58797BB3: cdq
        __asm _emit 0x99
        // 0x58797BB4: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58797BB6: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58797BB8: cmp eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x40
        // 0x58797BBB: jle 0x58797bcd
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58797BBD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58797BBF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58797BC1: setge al
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC0
        // 0x58797BC4: dec eax
        __asm _emit 0x48
        // 0x58797BC5: and eax, 0xffffff80
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x80
        // 0x58797BC8: add eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x40
        // 0x58797BCB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58797BCD: push ecx
        __asm _emit 0x51
        // 0x58797BCE: push edi
        __asm _emit 0x57
        // 0x58797BCF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58797BD1: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xB2
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58797BD6: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58797BD9: cmp ecx, dword ptr [esi + 0x50]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x58797BDC: jne 0x58797d19
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797BE2: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58797BE5: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x58797BE8: jne 0x58797d19
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797BEE: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58797BF2: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797BF7: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58797BFA: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797BFF: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58797C02: jne 0x58797cd0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797C08: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58797C0C: mov ecx, 0xe2ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797C11: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58797C14: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797C19: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58797C1C: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58797C20: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58797C25: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797C2B: call 0x5875f310
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x76
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58797C30: cmp dword ptr [esi + 0x2fc], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797C37: jne 0x58797c44
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58797C39: mov ecx, dword ptr [esi + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797C3F: call 0x5875f310
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x76
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58797C44: mov ecx, dword ptr [esi + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797C4A: call 0x5875f310
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x76
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58797C4F: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58797C52: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58797C55: add eax, 0xe9
        __asm _emit 0x05
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797C5A: push eax
        __asm _emit 0x50
        // 0x58797C5B: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xB7
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58797C60: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58797C65: mov edi, 0x30
        __asm _emit 0xBF
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797C6A: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797C70: jle 0x58797c89
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58797C72: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797C79: je 0x58797c89
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58797C7B: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797C81: mov ecx, dword ptr [ecx + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797C87: jmp 0x58797c8b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58797C89: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58797C8B: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58797C91: push edx
        __asm _emit 0x52
        // 0x58797C92: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xFC
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58797C97: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58797C9C: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797CA2: jle 0x58797cc4
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x58797CA4: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797CAB: je 0x58797cc4
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58797CAD: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797CB3: mov ecx, dword ptr [eax + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797CB9: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58797CBB: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58797CBE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797CC0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58797CC2: jmp 0x58797d19
        __asm _emit 0xEB
        __asm _emit 0x55
        // 0x58797CC4: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58797CC6: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58797CC8: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58797CCB: push ecx
        __asm _emit 0x51
        // 0x58797CCC: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58797CCE: jmp 0x58797d19
        __asm _emit 0xEB
        __asm _emit 0x49
        // 0x58797CD0: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58797CD4: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797CD9: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58797CDC: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797CE1: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58797CE4: jne 0x58797d19
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x58797CE6: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58797CEA: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797CEF: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58797CF2: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797CF7: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58797CFA: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58797CFE: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797D03: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58797D07: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797D0C: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58797D10: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797D15: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58797D19: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x58797D1C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58797D1E: je 0x58797d35
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58797D20: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x58797D23: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58797D25: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x58797D28: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x58797D2B: je 0x58797d38
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58797D2D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58797D2F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58797D31: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58797D33: jne 0x58797d20
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58797D35: pop edi
        __asm _emit 0x5F
        // 0x58797D36: pop esi
        __asm _emit 0x5E
        // 0x58797D37: ret
        __asm _emit 0xC3
        // 0x58797D38: pop edi
        __asm _emit 0x5F
        // 0x58797D39: pop esi
        __asm _emit 0x5E
        // 0x58797D3A: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
